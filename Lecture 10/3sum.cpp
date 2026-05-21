/* You are given an array/list ARR consisting of N integers.
Your task is to find all the distinct triplets present in the array which adds up to a given number K.
An array is said to have a triplet {ARR[i], ARR[j], ARR[k]} with sum = 'K' 
if there exists three indices i, j and k such that i!=j, j!=k and i!=j and ARR[i] + ARR[j] + ARR[k] = 'K'*/

#include <iostream>
using namespace std;
int main()
{
    int arr[5]={1, 2, 3, 4, 5};
    int n= 5, target=9;
    // to understand the logic of brute force solution for 3sum problem on codestudio

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i]+arr[j]+arr[k]==target)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                }
                
            }
        }
    }
    return 0;
}