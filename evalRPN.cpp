class Solution {
    public:
        bool oper(string x){
            if (x == "+" || x=="/" || x=="-" || x=="*")return true;
            return false;
        }
        int evalRPN(vector<string>& tokens) {
            stack<int> s;
            int total = 0;
            for(int i=0;i<tokens.size();i++){
                if(oper(tokens[i])){
                    int sec = s.top();
                    s.pop();
                    int first = s.top();
                    s.pop();
                    if (tokens[i] == "*"){
                        total = first*sec;
                        s.push(total);
                    }else if(tokens[i] == "/"){
                        total = first/sec;
                        s.push(total);
                    }else if(tokens[i] == "+"){
                        total = first +sec;
                        s.push(total);
                    }else{
                        total = first-sec;
                        s.push(total);
                    }
                }else{
                    s.push(stoi(tokens[i]));
                }
            }
            return s.top();
        }
    };