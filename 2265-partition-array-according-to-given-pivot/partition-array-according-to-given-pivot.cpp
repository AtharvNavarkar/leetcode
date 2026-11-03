class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> l1;
        vector<int> l2;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < pivot){
                l1.push_back(nums[i]);
            }else if(nums[i] > pivot){
                l2.push_back(nums[i]);
            }
        }
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == pivot){
                l1.push_back(pivot);
            }
        }
        l1.insert(l1.end(), l2.begin(), l2.end());
        return l1;
    }
};