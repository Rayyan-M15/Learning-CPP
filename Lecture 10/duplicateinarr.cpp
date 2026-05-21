/*Given an integer array nums of length n where all the integers of nums are in the range [1, n] 
and each integer appears at most twice, return an array of all the integers that appears twice.*/


//leetcode 442
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){
            int index=abs(nums[i])-1;
            if(nums[index]<0){
                ans.push_back(index+1);
            }

            else{
                nums[index]= -nums[index];
            }
        }

        return ans;
    }
};