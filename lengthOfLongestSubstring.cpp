class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            if (s.size() ==1){
                return 1;
            }
            unordered_set<char> seen;
    
            int maxLength = 0;
            int cur =0;
            int beg = 0;
    
            for (int cur=0;cur<s.size();cur++){
                while(seen.count(s[cur])){
                    seen.erase(s[beg]);
                    beg++;
                }
                seen.insert(s[cur]);
                maxLength = max(cur-beg+1, maxLength);
                
            }
            return maxLength;
        }
    };