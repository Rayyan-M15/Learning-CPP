#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s1 = {40, 25, 15, 65, 33, 40}; //this will be strored as {15, 25, 33, 40, 65},
                                            //it will be sorted and 40 will only be stored once

    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(2);
    s.insert(1);
    s.insert(6);
    s.insert(9);
    s.insert(6);
    s.insert(6);
    s.insert(0); 
    s.insert(0); 
    //stored as {0,1,5,6}, no duplication is allowed

    for(int i : s){
        cout<< i << endl;
    }cout<<endl;
    //this can also be written as:
    // for(auto i : s){
    //     cout<< i << endl;
    // }
    //here "auto" automatically deduces the datatype of i to int
    
    s.erase(s.begin()); //set also has iterators. 
    
    cout<<"After erasing the first element: "<<endl;
    for(auto i : s){
        cout<< i << endl;
    }
    
    s.erase(5);//You can also erase direct values from set like s.erase(5) and element 5 will be removed
    
    
    cout<<"After erasing 5: "<<endl;
    for(auto i : s){
        cout<< i << endl;
    }

    //to erase an element at n index
    auto it = s.begin();//it is an iterator and is set to 0 position
    int n = 2;
    advance(it, n); //adance function brings the iterator up by n places
    s.erase(it);
    
    cout<<"After erasing the element at index "<<n<< ": "<<endl;
    for(auto i : s){
        cout<< i << endl;
    }cout<<endl;

    cout<<"Is 5 present?: "<<s.count(5)<<endl;;
    cout<<"Is 9 present?: "<<s.count(9)<<endl<<endl;

    auto itr1 = s.find(9);
    if (itr1!=s.end())
    {
        cout<<"value at itr1: "<<*itr1<<endl;
    }else{
        cout<<"Element does not exist in set"<<endl;
    }
    
    
    auto itr2 = s.find(0);
    if (itr2!=s.end())
    {
        cout<<"value at itr2: "<<*itr2<<endl;
    }else{
        cout<<"Element does not exist for itr2"<<endl;
    }
    
    return 0;
}