//Code Studio:  Search In Rotated Sorted Array
//Leetcode: 33
int search(vector<int>& arr, int n, int k)
{
    int left = 0, right = n-1;

    while(left <= right){
        int mid = left + (right - left) / 2;

        if (arr[mid]== k){
            return mid;
        }
    
        if(arr[left] <= arr[mid]){
            if (arr[left] <= k && k< arr[mid]){
                right = mid - 1;
            }

            else{
                left = mid + 1;
            }

        }

        else{
            if (arr[mid]<k && k<= arr[right]){
                left = mid + 1;
            }

            else{
                right = mid - 1;
            }
        }
    }

    return -1;
}
