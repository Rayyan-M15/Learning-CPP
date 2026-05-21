//Leetcode 189
#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int size = nums.size();
    vector<int> temp(size);

    k = k % size;  // handle cases where k > size

    for(int i = 0; i < size; i++){
        temp[(i + k) % size] = nums[i];
    }

    nums = temp;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    rotate(nums, k);

    for(int x : nums){
        cout << x << " ";
    }

    return 0;
}
