/*GFG max occuring character
Given a string s of lowercase alphabets. The task is to find the maximum occurring character in the string s. If more than one character occurs the maximum number of times then print the lexicographically smaller character.

Examples:

Input: s = "testsample"
Output: 'e'
Explanation: 'e' is the character which is having the highest frequency.
Input: s = "output"
Output: 't'
Explanation: 't' and 'u' are the characters with the same frequency, but 't' is lexicographically smaller.
Constraints:
1 ≤ |s| ≤ 100
*/

#include <iostream>
using namespace std;
char getMaxOccuringChar(string str) {
    char freq[26]= {0}; //a->0 b->1 ... z ->25
    
    for(int i = 0; str[i] != '\0'; i++){
        char ch = str[i];
        int number = ch - 'a';
        
        freq[number]++; //for the character that exists in the string the number goes up
    }
    
    int maxfreq = 0, ans = 0;
    for(int j = 0; j<26; j++){
        if(maxfreq < freq[j]){
            ans = j;
            maxfreq = freq[j];
        }
    }
    
    char final = ans + 'a';
    return final;
    
}

int main()
{
    string s = "outp u t";
    cout<< getMaxOccuringChar(s);
    return 0;
}