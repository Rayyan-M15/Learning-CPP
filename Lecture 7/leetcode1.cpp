/*Given a signed 32-bit integer x, return x with its digits reversed. 
If reversing x causes the value to go outside
the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.
Assume the environment does not allow you to store 64-bit integers (signed or unsigned).*/

class Solution {
public:
    int reverse(int x) {
        
        int ans=0;
        while(x){
            int digit = x%10;
            if((ans<INT_MIN/10) || (ans>INT_MAX/10)){
                return 0;
            }
            ans = (ans*10) + digit;
            x=x/10;

        }

        return ans;
    }
};