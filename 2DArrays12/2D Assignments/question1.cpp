#include <iostream>
using namespace std;
int Counter(int mat[][4], int n, int m)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == 7)
            {
                count += 1;
            }
        }
    }

    return count;
}

int main()
{
    int mat[2][4] = {{4, 7, 8,7},
                     {8,7, 8, 7}};
    cout << "The number of times 7 occured in a matrix is : " << Counter(mat, 2, 4) << endl;
    return 0;
}