#include <iostream>
using namespace std;
int main()
{
    int side[3];
    cout<<"Enter 3 sides of triangle:"<<endl;
    for (int i = 0; i < 3; i++)
    {
        cout<<"Side "<< i+1 <<" ";
        cin>>side[i];
    }

    if(side[0]+side[1]>side[2] && side[0]+side[2]>side[1] && side[2]+side[1]>side[0]){
        cout<<"Valid Triangle"<<endl;
    }
    else{
        cout<<"Invalid Triangle"<<endl;
    }
    
    return 0;
}
