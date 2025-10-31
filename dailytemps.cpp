class Solution {
    public:
        vector<int> dailyTemperatures(vector<int>& temperature) {
            vector<int> res (temperature.size(),0);
            stack<int> ind;
            for(int i=0;i<temperature.size();i++){
                while(!ind.empty() && temperature[ind.top()] < temperature[i]){
                    res[ind.top()] = i-ind.top();
                    ind.pop();
                }
                ind.push(i);
            }
            return res;
        }
    
    };