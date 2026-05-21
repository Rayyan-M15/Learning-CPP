#include <iostream>
using namespace std;
int main()
{
    string s1 = "Rayyan";
    char s2[] = {'R', 'a', 'y', 'y', 'a', 'n', '\0'};

    for (int i = 0; i < s1.size(); i++)
    {
        cout<<s1[i];
    }cout<<endl;

    for (int i = 0; i < sizeof(s2)/sizeof(s2[0]); i++)
    {
        cout<<s2[i];
    }cout<<endl;
    
    return 0;
}