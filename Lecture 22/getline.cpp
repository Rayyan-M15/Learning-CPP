#include <iostream>
using namespace std;
int main()
{
    int age;
    char name1[100];

    cin >> age;
    cin.ignore(); // we have to use it as the cin in readin the age interferes with the getline for the name.
                  // hence we have to ignore it after it reads the value to make sure we can read the next values too

    cin.getline(name1, 100);
    cout << age << endl;
    cout << name1<<endl;

    // in modern day we use:
    string name2;

    getline(cin, name2);
    cout<<name2<<endl;
    return 0;
}