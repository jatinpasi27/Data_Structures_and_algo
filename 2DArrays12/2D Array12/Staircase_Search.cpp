#include <iostream>
using namespace std;
//By taking top right most corner element as start point.
bool StairCase_Search(int mat[][4], int n, int m, int key)
{
    int row = 0;
    int col = m - 1;
    while (row < n && col >= 0)
    {
        if (mat[row][col] == key)
        {
            cout << "Key found..\n";
            cout << "The indices are : " << "(" << row << "," << col << ")";
            return true;
        }
        else if (mat[row][col] > key)
        {
            // left
            col--;
        }
        else
        {
            // Down
            row++;
        }
    }
    cout<<"Key not found\n";
    return false;
}

int main()
{
    int mat[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};
    int key = 5;
    StairCase_Search(mat, 4, 4, key);
    return 0;
}