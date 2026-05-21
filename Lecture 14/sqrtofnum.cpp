//Code360: Square Root of a number
int floorSqrt(int n)
{
    if(n==0 || n==1){ return n;}
    int left = 1, right = n, ans=0;
    while(left <= right){
        int mid = left + (right - left)/2;
        long long sq = (long long) mid*mid;

        if(sq == n){
            return mid;
        }

        else if(sq<n){
            ans = mid;
            left = mid + 1;
        }

        else{
            right = mid - 1;
        }
    }
    return ans;
}
