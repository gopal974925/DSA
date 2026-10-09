// class MinStack {
// public:
//     stack<pair<int, int>> s;

//     MinStack() {
//     }

//     void push(int val) {
//         int minval;

//         if (s.empty()) {
//             minval = val;
//         } else {
//             minval = min(val, s.top().second);
//         }

//         s.push({val, minval});
//     }

//     void pop() {
//         s.pop();
//     }

//     int top() {
//         return s.top().first;
//     }

//     int getMin() {
//         return s.top().second;
//     }
// };




class MinStack {
public:
    stack<long long> s;
    long long minval;

    MinStack() {
    }

    void push(int val) {
        if (s.empty()) {
            s.push(val);
            minval = val;
        } 
        else if (val < minval) {
            s.push(2LL * val - minval);
            minval = val;
        } 
        else {
            s.push(val);
        }
    }

    void pop() {
        if (s.top() < minval) {
            minval = 2LL * minval - s.top();
        }
        s.pop();
    }

    int top() {
        if (s.top() < minval) {
            return (int)minval;
        }
        return (int)s.top();
    }

    int getMin() {
        return (int)minval;
    }
};