class Solution {
public:
    // Moore's Voting Algorithm  O(n) time
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int el = 0;
        for(int x: nums){
            if(count == 0){
                el = x;
                count++;
            }
            else if(x == el){
                count++;
            }
            else
                count--;
        }
        return el;
    }

};
