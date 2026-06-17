/*You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.
Now, your task is to find the first and last occurrence of ‘k’ in 'arr*/

//Code studio Problem: First and Last Position of an Element In Sorted Array

//TC = O(n)

#include <iostream>
using namespace std;
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int start=-1, end=-1;
    for(int i = 0; i<n; i++){
        if(arr[i]==k){
            start=i;
            break;
        }
    }
    for(int i = n-1; i>=0; i--){
        if(arr[i]==k){
            end=i;
            break;
        }
    }
    
    return {start, end};
}

int main()
{
    int n, k;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> k;

    pair<int, int> ans = firstAndLastPosition(arr, n, k);

    cout << ans.first << " " << ans.second << endl;

    return 0;
}

//Alternative better approach, with TC = O(logn)
/*
int firstocc(vector<int>& arr, int n, int k){
    int s = 0, e=n-1;
    int mid = s + (e-s)/2;
    int ans1 = -1;
    
    while(s<=e){
        if(arr[mid] == k){
            ans1 = mid;
            e = mid -1;
        }
        
        else if(arr[mid]>k){
            e = mid - 1;
        }
        
        else{
            s = mid + 1;
        }
        
        mid = s + (e-s)/2;
    }
    
    return ans1;
}

int lastocc(vector<int>& arr, int n, int k){
    int s = 0, e=n-1;
    int mid = s + (e-s)/2;
    int ans2 = -1;
    
    while(s<=e){
        if(arr[mid] == k){
            ans2 = mid;
            s = mid + 1;
        }
        
        else if(arr[mid]>k){
            e = mid - 1;
        }
        
        else{
            s = mid + 1;
        }
        
        mid = s + (e-s)/2;
    }
    
    return ans2;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    return {firstocc(arr, n, k), lastocc(arr, n, k)};
}
*/

