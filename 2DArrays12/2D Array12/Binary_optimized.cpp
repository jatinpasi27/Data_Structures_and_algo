#include <iostream>
using namespace std;
void Binary_Opti(int mat[4][4], int n, int m, int key)
{
    bool found = false;
    for (int row = 0; row < n; row++)
    {
        int st = 0;
        int end = m - 1;

        while (st <= end)
        {
            int mid = (st + end) / 2;
            if (key == mat[row][mid])
            {
                found = true;
                cout << "The indices found to be: " << "(" << row << "," << mid << ")";
                return;
            }
            else if (key > mat[row][mid])
            {
                st = mid + 1;
            }
            else
            {
                end = end - 1;
            }
        }
    }
    if (found != true)
    {
        cout << "Key value not found in entire matrix." << endl;
    }
}

int main()
{
    int mat[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};
    int key = 15;
    Binary_Opti(mat, 4, 4, key);
    return 0;
}