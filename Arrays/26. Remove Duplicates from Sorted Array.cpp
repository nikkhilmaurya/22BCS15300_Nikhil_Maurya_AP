class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> res;
        int k = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i-1] == nums[i]) continue;
            res.push_back(nums[i-1]);
            k++;
        }
        res.push_back(nums[nums.size()-1]);
        k++;
        for(int i = 0 ; i < k; i++){
            nums[i] = res[i];
        }
        return k;
    }
};
