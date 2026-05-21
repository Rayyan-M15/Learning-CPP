/*Write a C++ program that takes an amount as input and determines how many currency notes of each denomination
(₹100, ₹50, ₹20, and ₹1) are required to make up that amount. Use a switch statement to perform the calculations*/

#include <iostream>
using namespace std;
int main()
{
    char exit;
    int amt, n100 = 0, n50 = 0, n20 = 0, n1 = 0;
    while (true)
    {
        
        
        cout << "Enter the amount you need: ";
        cin >> amt;
        
        switch (1)
        {
            case 1:
            {
                n100 = amt / 100;
                amt = amt % 100;
            }
            
            case 2:
            {
                n50=amt/50;
                amt=amt%50;
            }
            
            case 3:
            {
                n20=amt/20;
                amt=amt%20;
            }
            
            case 4: 
            {
                n1=amt/1;
                amt=amt%1;
            }
        }
        
        cout<<"The number of 100 rupee notes: "<<n100<<endl;
        cout<<"The number of 50 rupee notes: "<<n50<<endl;
        cout<<"The number of 20 rupee notes: "<<n20<<endl;
        cout<<"The number of 1 rupee notes: "<<n1<<endl;
        cout<<"Exit? (Y/N): ";
        cin>>exit;

        if (exit=='Y' || exit=='y')
        {
            cout<<"Code Terminated"<<endl;
            break;
        }

        else if (exit=='N' || exit=='n')
        {
            cout<<"Next Round"<<endl;
        }

        else{
            cout<<"Error!!! Restarting the program"<<endl;
        }
        
        
    }
        
    return 0;
}