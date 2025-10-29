#include <vector>
using namespace std;

class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int min = prices[0];
            int prof = 0;
            for(int i=0;i<prices.size();i++){
                if(prices[i]<min){
                    min = prices[i];
                }
                if (prof< prices[i] - min){
                    prof = prices[i] - min;
                }
            }
            return prof;
            
        }
    };