#include <iostream>
using namespace std;
string replaceSpaces(string &str)
{
    string temp = "";
    int len = str.length();

    for (int i = 0; i < len; i++)
    {
        if (str[i] == ' ')
        {
            temp.append("@40");
        }

        else
        {
            temp.push_back(str[i]);
        }
    }

    return temp;
}
int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Modified string: " << replaceSpaces(str) << endl;

    return 0;
}

//AI suggestioon
// #include <iostream>
// #include <string>

// using namespace std;

// string replaceSpaces(string &str){
//     string temp = "";

//     for(char ch: str){
//         if(ch == ' '){
//             temp+="@40";
//         }

//         else{
//             temp+=ch;
//         }
//     }

//     return temp;

// }

// int main() {

//     string str;

//     cout << "Enter a string: ";
//     getline(cin, str);

//     cout << "Modified string: "
//          << replaceSpaces(str)
//          << endl;

//     return 0;
// }
