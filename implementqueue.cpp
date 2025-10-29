class MyQueue {
    public:
        stack<int> first;
        stack<int>second;
        MyQueue() {
        }
        
        void push(int x) {
            while(!first.empty()){
                second.push(first.top());
                first.pop();
            }
            first.push(x);
            while(!second.empty()){
                first.push(second.top());
                second.pop();
            }
        }
        
        int pop() {
            int top = first.top();
            first.pop();
            return top;
            
            
        }
        
        int peek() {
            return first.top();
        }
        
        bool empty() {
            return first.empty();
        }
    };