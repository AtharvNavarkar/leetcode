class Solution {
public:
    bool f1(int left, int right, string s){
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    vector<vector<string>> ans;
    void f(string s, int start, vector<string>& path){
        if(start == s.size()){
            ans.push_back(path);
            return;
        }
        for(int i = start; i < s.size(); i++){
            if(f1(start, i, s)){
                string p = s.substr(start, i - start + 1);
                path.push_back(p);
                f(s, i + 1, path);
                path.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> path;
        f(s, 0, path);
        return ans;
    }
};