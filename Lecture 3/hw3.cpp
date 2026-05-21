#include <iostream>
using namespace std;
int main()
{
    // fahrenheit to celcius table
    float f, c;
    int choice;
    cout << "1 = celcius to fahrenhiet \n2=fahrenhiet to celcius" << endl;
    cout << "choice: ";
    cin >> choice;

    if (choice == 2)
    {
        cout << "Enter the value of fahrenhiet: ";
        cin >> f;
        c = (f - 32) * 5 / 9;
        cout << "Celicus: " << c << endl;
    }

    else if (choice == 1)
    {
        cout << "Enter the value of celcius: ";
        cin >> c;
        f = (9 * c / 5) + 32;
        cout << "Fahrenhiet: " << f << endl;
    }
    else
    {
        cout << "Error" << endl;
    }

    return 0;
}