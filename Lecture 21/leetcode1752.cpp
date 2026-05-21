//leetcode 1752
class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for(int i = 1; i<n; i++){
            if(nums[i-1] > nums[i]){
                count++;
            }
        }

        if(nums[n-1]> nums[0]){
            count++;
        }

        return count<=1; //0 if all the values in the vector are equal. 1 is the last element is greater than the firs element.
        //more than one means that the array is not sorted hence it is false
    }
};

