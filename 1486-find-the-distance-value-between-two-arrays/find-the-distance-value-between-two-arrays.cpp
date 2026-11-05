class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int ans = 0;
        for(int i = 0; i < arr1.size(); i++){
            int w = arr1[i] - d;
            int ws = arr1[i] + d;
            for(int j = 0; j < arr2.size(); j++){
                if(arr2[j] <= ws && arr2[j] >= w){
                    break;
                }else if(j == arr2.size() - 1 && (arr2[j] > ws || arr2[j] < w)){
                    ans++;
                }
            }
        }
        return ans;
    }
};