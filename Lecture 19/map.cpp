#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "Rayyan"; // method 1: to insert an element in a map
    m[3] = "Mir";
    m[2] = "Rasool";
    // it is automatically sorted by key.

    m.insert({8, "Showkat"}); // Method 2: To insert an element in a map

    cout << "Before Erasing: " << endl;
    for (auto i : m)
    {
        cout << i.first << ": " << i.second << endl;
    }
    cout << endl;

    cout << "Finding 3 in  map: " << m.count(3) << endl;   // 1 = true, 0 = false
    cout << "Finding 11 in  map: " << m.count(11) << endl; // 1 = true, 0 = false

    cout << "After Erasing 2: " << endl;
    m.erase(2);
    for (auto i : m)
    {
        cout << i.first << ": " << i.second << endl;
    }
    cout << endl;

    cout<<"Find function for 3: "<<endl;
    auto it = m.find(3);

    for (auto i = it; i != m.end(); i++)
    {
        cout<< (*i).first<<endl; // it prints the key its pointing to and the all the other keys that come after it
    }
    

    return 0;
}