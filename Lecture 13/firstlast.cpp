/*You have been given a sorted array/list 'arr' consisting of ‘n’ elements. You are also given an integer ‘k’.
Now, your task is to find the first and last occurrence of ‘k’ in 'arr*/

//Code studio Problem: First and Last Position of an Element In Sorted Array
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
