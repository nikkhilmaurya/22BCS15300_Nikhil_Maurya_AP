class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        for(int i = 0; i < nums.size(); i++){
            int n = nums[i];
            int k = target - n;
            if(mpp.find(k) != mpp.end()){
                return {mpp[k],i};
            }
            else
              mpp[n] = i;
        }      
        return {};
    }
};
