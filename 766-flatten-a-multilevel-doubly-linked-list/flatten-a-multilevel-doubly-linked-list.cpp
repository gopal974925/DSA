/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
        if(head == nullptr){
            return head;
        }
        Node* curr =head;
        while(curr != nullptr){
            if(curr->child !=nullptr){
                // flaten the child
                Node* next=curr->next;
                curr->next=flatten(curr->child);


                curr->next->prev=curr;
                curr->child=nullptr;

                // find tail
                while(curr->next){
                    curr=curr->next;
                }

                // attach tail with next ptr
                if(next!=nullptr){
                    curr->next=next;
                    next->prev=curr;
                }
                
            }
            curr=curr->next;
        }
        return head;
    }
};