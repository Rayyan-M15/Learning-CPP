// leetcode 283

//my solution
class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n = arr.size();
        int j = 0;
        
        for(int i =0; i< n; i++){

            if(arr[i]!=0){
                swap(arr[i], arr[j]);
                j++;
            }
        }
    }
};


//solution 2
#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& arr) {
    int n = arr.size();
    int j = 0;  // position to place next non-zero

    // First pass: move all non-zero elements forward
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[j++] = arr[i];
        }
    }

    // Second pass: fill remaining positions with 0
    while (j < n) {
        arr[j++] = 0;
    }
}

int main() {
    vector<int> arr = {0, 1, 0, 3, 12};

    moveZeroes(arr);

    for (int x : arr) {
        cout << x << " ";
    }

    return 0;
}
