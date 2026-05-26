#include <iostream>
#include <vector>

using namespace std;

bool isPossible(vector<int>& books, int students, int maxPages) {

    int studentCount = 1;
    int currentPages = 0;

    for(int i = 0; i < books.size(); i++) {

        if(books[i] > maxPages) {
            return false;
        }

        if(currentPages + books[i] <= maxPages) {
            currentPages += books[i];
        }
        else {
            studentCount++;
            currentPages = books[i];

            if(studentCount > students) {
                return false;
            }
        }
    }

    return true;
}

int allocateBooks(vector<int>& books, int students) {

    int n = books.size();

    if(students > n) {
        return -1;
    }

    int low = books[0];
    int high = 0;

    // Finding max element and sum manually
    for(int i = 0; i < n; i++) {

        if(books[i] > low) {
            low = books[i];
        }

        high += books[i];
    }

    int ans = -1;

    while(low <= high) {

        int mid = low + (high - low) / 2;

        if(isPossible(books, students, mid)) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return ans;
}

int main() {

    vector<int> books = {10, 20, 30, 40};
    int students = 2;

    cout << allocateBooks(books, students)<<endl;

    return 0;
}