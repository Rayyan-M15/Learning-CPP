//write a code to personally greet the user.
#include <iostream>
using namespace std;

void greet(string name){
    cout<<"Good morning "<< name <<". How was your day?"<<endl;
}

int main()
{
    string n;
    cout<<"What is your name? "<<endl;
    getline(cin, n); //or use cin, but it only take the value until there is no space. i.e. it only takes one word

    greet(n);
    return 0;
}