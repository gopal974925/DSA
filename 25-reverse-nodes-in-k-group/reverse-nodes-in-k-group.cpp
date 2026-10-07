class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        // Check whether there are at least k nodes
        ListNode* temp = head;
        int count = 0;

        while (count < k) {
            if (temp == nullptr) {
                return head;
            }
            temp = temp->next;
            count++;
        }

        // Reverse the remaining groups first
        ListNode* nextGroup = reverseKGroup(temp, k);

        // Reverse the current k nodes
        ListNode* prev = nextGroup;
        temp = head;

        count = 0;
        while (count < k) {
            ListNode* next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
            count++;
        }

        return prev;
    }
};
