//leetcode 724

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftsum=0, rightsum, arrsum=0;

        for(int i =0; i< nums.size(); i++){
            arrsum += nums[i];
        }

        for(int i =0; i< nums.size(); i++){
            if(leftsum == arrsum -  leftsum - nums[i]){
                return i;
            }

            else{
                leftsum += nums[i];
            }
        }
        return -1;
    }
};