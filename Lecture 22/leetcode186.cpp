// reverse words in a string 2
/*
Given a character array s, reverse the order of the words.
A word is defined as a sequence of non-space characters. The words in s will be separated by a single space.
Your code must solve the problem in-place, i.e. without allocating extra space.
Example 1:

Input:
s = ["t","h","e"," ","s","k","y"," ","i","s"," ","b","l","u","e"]

Output:
["b","l","u","e"," ","i","s"," ","s","k","y"," ","t","h","e"]
*/

#include <iostream>
using namespace std;
void reverse(char ch[], int st, int end){
    while(st<end){
        swap(ch[st], ch[end]);
        st++;
        end--;
    }
}

int getlength(char ch[]){
    int i = 0;
    while(ch[i]!='\0'){
        i++;
    }
    return i;
}
int main()
{
    char s[] = {'m', 'y', ' ', 'n', 'a', 'm', 'e', ' ', 'i', 's', ' ', 'r', 'a', 'y', 'y', 'a', 'n', '\0'};
    //output should be: { 'r', 'a', 'y', 'y', 'a', 'n', ' ', 'i', 's', ' ', 'n', 'a', 'm', 'e', ' ','m', 'y',}

    //aproach, first reverse the entire array and then reverse the words individually.

    //reversing the entire string
    int n =getlength(s);
    reverse(s, 0, n-1);

    // for (int i = 0; i < getlength(s); i++)
    // {
    //     cout<<s[i];
    // }cout<<endl;
    int start =0;

    for (int i = 0; i <= n; i++)
    {
        if (s[i]==' '|| s[i]=='\0')
        {
            reverse(s, start, i-1);
            start = i+1;
        }
        
    }

    cout<<s;
    
    

    return 0;
}