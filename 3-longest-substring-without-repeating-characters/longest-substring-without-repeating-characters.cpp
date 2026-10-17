class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp(s.size());
        int left = 0;
        int ans = 0;

        for(int i = 0; i < s.size(); i++){
            mp[s[i]]++;

            while(mp[s[i]] > 1){
                mp[s[left]]--;
                left++;
            }
            ans = max(ans, i - left + 1);
        }
        return ans;
    }
};