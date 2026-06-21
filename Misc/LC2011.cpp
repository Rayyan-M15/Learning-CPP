#include <iostream>
using namespace std;

int finalValueAfterOperations(vector<string> &operations)
{
    int size = operations.size();
    int x = 0;

    for (int i = 0; i < size; i++)
    {
        if (operations[i] == "--X")
        {
            --x;
        }
        if (operations[i] == "X--")
        {
            x--;
        }
        if (operations[i] == "++X")
        {
            ++x;
        }
        if (operations[i] == "X++")
        {
            x++;
        }
    }

    return x;
}

int main()
{
    vector<string> operations = {"--X", "X++", "X++"};

    cout << finalValueAfterOperations(operations) << endl;

    return 0;
}