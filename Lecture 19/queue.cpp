#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q;

    q.push("Rayyan");
    q.push("Rasool");
    q.push("Mir");

    cout<<"Size before pop: "<< q.size()<<endl;
    cout<<"First element: "<< q.front()<<endl;
    
    q.pop();
    
    cout<<"Size after pop: "<< q.size()<<endl;
    cout<<"New first element: "<< q.front()<<endl;

    cout<<"Is the stack empty: "<< boolalpha<<q.empty()<<endl;

    return 0;
}