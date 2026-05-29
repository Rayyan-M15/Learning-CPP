//leetcode 1752


// class Solution {
// public:
//     bool check(vector<int>& nums) {
//         int count = 0;
//         int n = nums.size();
//         for(int i = 1; i<n; i++){
//             if(nums[i-1] > nums[i]){
//                 count++;
//             }
//         }

//         if(nums[n-1]> nums[0]){
//             count++;
//         }

//         return count<=1; //0 if all the values in the vector are equal. 1 is the last element is greater than the firs element.
//         //more than one means that the array is not sorted hence it is false
//     }
// };



#include <iostream>
#include <vector>

using namespace std;

// Function to check whether the array is sorted and rotated
bool check(vector<int>& nums) {

    int count = 0;          // Counts the number of "drops" in the array
    int n = nums.size();    // Size of the array

    // Check every adjacent pair
    for(int i = 1; i < n; i++) {

        // If previous element is greater than current,
        // the sorted order breaks here
        if(nums[i - 1] > nums[i]) {
            count++;
        }
    }

    // Check the circular connection:
    // last element -> first element
    // because a rotated sorted array wraps around
    if(nums[n - 1] > nums[0]) {
        count++;
    }

    // A sorted and rotated array can have at most one break
    return count <= 1;
}

int main() {

    vector<int> nums = {3, 4, 5, 1, 2};

    if(check(nums)) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }

    return 0;
}