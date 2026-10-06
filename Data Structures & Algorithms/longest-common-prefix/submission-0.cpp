class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        string ans = "";
        for(int j = 0; j < prefix.size(); j++){
            char ch = prefix[j];
            for(int i = 1; i < strs.size(); i++){
                if( ch != strs[i][j]){
                    return ans;
                }
            }

            ans = ans + ch;
        }
         return ans;
    }
};