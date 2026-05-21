#include <iostream>
using namespace std;

int sqrtint(int num){
    if(num == 0 || num == 1 ){
        return num;
    }
    
    int left = 1, right = num, ans = 0;

    while (left <= right)
    {
        long long int mid = left + (right - left)/2;

        long long int sq = mid * mid;

        if (sq == num)
        {
            return mid;
        }

        else if(sq < num){
            ans = mid;
            left = mid + 1;
        }

        else{
            right = mid - 1;
        }  

    }
    
    return ans;
}

double precise(int n, int precision, int currentsol){
    double factor = 1;
    double ans = currentsol;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = ans; j*j < n; j+=factor)
        {
            ans = j;
        }
        
    }
    

    return ans;
}

int main()
{
    int num;
    cout<<"Enter the value of the number: ";
    cin>> num;

    cout<<"The integral square root of "<< num << " is: "<< sqrtint(num)<< endl;
    cout<<"The precise square root of "<< num << " unto 3 decimal points is: "<< precise(num, 3, sqrtint(num))<< endl;
    return 0;
}