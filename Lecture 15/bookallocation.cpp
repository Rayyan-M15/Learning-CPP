#include <iostream>
#include <vector>

using namespace std;

bool isPossible(vector<int>& arr, int n, int m, int maxpages) {

    int studentcount = 1;
    int currentpages = 0;

    for(int i = 0; i < n; i++) {

        if(arr[i] > maxpages) { //if 1 book has more pages than the highest one in the arr
            return false;
        }

        if(currentpages + arr[i] <= maxpages){ //assgn to the current student
            currentpages += arr[i];
        }

        else{
            //incase all the books werent allocated we increase the students
            studentcount++;
            currentpages = arr[i];

            if(studentcount>m){//if there are more students than there are books
                return false;
            }
        }
    }

    return true;
}


int findPages(vector<int>& arr, int n, int m) {
    if(m>n){ //more students than books
        return -1;
    }

    int low = arr[0]; //just assuming
    int high = 0; //just assuming

    for(int i = 0; i<n ; i++){
        if(arr[i]>low){
            low = arr[i]; // low = max number of pages in any book
        }

        high += arr[i]; // high = sum of all the pages in arr
    }

    int ans = -1;

    //binary search part

    while(low<=high){
        int mid = low + (high - low)/2;

        if(isPossible(arr, n, m, mid)){
            ans = mid; //storig the answer in case it is the final ans

            high = mid -1;//to check if a smller ans is possible
        }

        else{
            low = mid +1; //incase more than available students are required
        }
    }

    return ans;
}

int main() {

    vector<int> arr = {10, 20, 30, 40};

    int n = arr.size(); // Number of books
    int m = 2;          // Number of students

    cout << findPages(arr, n, m) << endl;

    return 0;
}