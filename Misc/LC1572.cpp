#include <iostream>
using namespace std;
int diagonalSum(vector<vector<int>> &mat)
{
    int primdiag = 0;
    int secdiag = 0;

    int n = mat.size();

    for (int i = 0; i < n; i++)
    {
        primdiag += mat[i][i];
        secdiag += mat[i][n - 1 - i];
    }

    int ans = primdiag + secdiag;

    if (n % 2 == 1)
    {
        ans -= mat[n / 2][n / 2];
    }

    return ans;
}

int main()
{
    vector<vector<int>> mat = { {1, 2, 3},
                                {4, 5, 6},
                                {7, 8, 9}};

    cout << "Diagonal Sum = " << diagonalSum(mat) << endl;
    return 0;
}