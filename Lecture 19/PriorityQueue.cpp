#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int> pq; // priority queue with default max heap

    priority_queue<int, vector<int>, greater<int>> mini; // priority queue in order to initialise it with min heap

    pq.push(0);
    pq.push(8);
    pq.push(4);
    pq.push(12);

    int n = pq.size(); // we need to separately take the times a loop should run as due to "pq.pop()", the pq.size() is changing.

    cout << "Size of pq: " << pq.size() << endl;
    for (int i = 0; i < n; i++)
    {
        cout << pq.top() << " "; // output will be sorted in decreasing order
        pq.pop();
    }
    cout << endl;

    mini.push(8);
    mini.push(0);
    mini.push(4);
    mini.push(12);

    cout << "Size of mini: " << mini.size() << endl;
    for (int i = 0; i < n; i++)
    {
        cout << mini.top() << " "; // output will be sorted in increasing order
        mini.pop();
    }
    cout << endl;

    cout << "Is pq empty?: " << boolalpha << pq.empty() << endl;
    cout << "Is mini empty?: " << boolalpha << mini.empty() << endl;
    return 0;
}