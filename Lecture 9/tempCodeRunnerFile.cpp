#include <iostream>
#include <vector>
using namespace std;
//[4,1,2,1,2]
int func ( vector <int> &vec){
    int result , i = 0;
    while (i < vec.size())
    {
        result = result ^ vec[i];
        i++;
    }
    return result;
}

int main()
{
    vector <int> vec = {1,4,5,4,5};
    cout << "the unique number is: " << func(vec) ;
    


    return 0;
}