// Brute Force O(n^2) time => Gives TLE Because n is 10^5 which equals to 10^10 in n^2 
//So giving TLE because in 1 second generally CPU perfoms 10^8 operations per second

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for(int i =0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i] == nums[j]) return true;
            }
        }
        return false;
    }
};

//Optimized using Hashmap O(n) Time and O(n) Space

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto i:nums){
             mp[i]++;
             if(mp[i] >= 2) return true; 
        }     
        return false;  
    }
    
};
