#include <iostream>
using namespace std;
int main()
{
    string s1 = "Rayyan";
    char s2[] = {'R', 'a', 'y', 'y', 'a', 'n', '\0'};

    
    for (int i = 0; i < sizeof(s2)/sizeof(s2[0]); i++)
    {
        cout<<s2[i];
    }cout<<endl;
    
    cout<<s1.length()<<endl;
    
    s1.push_back('R');
    
    cout<<"After PushBack: ";
    for (int i = 0; i < s1.size(); i++)
    {
        cout<<s1[i];
    }cout<<endl;
    
    
    cout<<"After Appending: ";
    s1.append("Mir");
    
    for (int i = 0; i < s1.size(); i++)
    {
        cout<<s1[i];
    }cout<<endl;
    
    cout<<"After popback: ";

    s1.pop_back();
    
    for (int i = 0; i < s1.size(); i++)
    {
        cout<<s1[i];
    }cout<<endl;

    return 0;
}