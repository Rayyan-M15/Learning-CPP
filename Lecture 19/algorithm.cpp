#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector <int> v;

    v.push_back(1);
    v.push_back(5);
    v.push_back(10);
    v.push_back(15);

    cout<<"Finding 10: "<< boolalpha << binary_search(v.begin(), v.end(), 10)<<endl;
    cout<<"Finding 13: "<< boolalpha << binary_search(v.begin(), v.end(), 13)<<endl;

    cout<<"Finding the lower bound of 10: " << lower_bound(v.begin(), v.end(), 10)- v.begin()<<endl;
    cout<<"Finding the upper bound of 10: " << upper_bound(v.begin(), v.end(), 10) - v.begin()<<endl;

    cout<<"Before rotating: "<<endl;
    for(int i : v){
        cout<<i<<" ";
    }cout<<endl;

    rotate(v.begin(), v.begin() +1, v.end());

    cout<<"After rotating: "<<endl;
    for(int i : v){
        cout<<i<<" ";
    }cout<<endl;
    
    sort(v.begin(), v.end());
    
    cout<<"After sorting: "<<endl;
    for(int i : v){
        cout<<i<<" ";
    }cout<<endl;

    int a=3 , b=5, c = 33, d = 0;

    cout<<"Maximum value: "<<max({a,b,c,d})<<endl;
    cout<<"Minimum value: "<<min({a,b,c,d})<<endl;

    cout<<"Original value of a: "<<a<<endl;
    cout<<"Original value of b: "<<b<<endl;

    swap(a,b);

    cout<<"New value of a: "<<a<<endl;
    cout<<"New value of b: "<<b<<endl;

    string abcd = "abcd";
    cout<<"Original string: "<< abcd<<endl;
    reverse(abcd.begin(), abcd.end());
    cout<<"Reveresed string: "<< abcd<<endl;

    return 0;
}