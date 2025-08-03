#include<iostream>
using namespace std;
//By taking top right most corner element as start point.
bool StairCase_Search(int mat[][4], int n, int m, int key)
{
    int row = n-1;
    int col = 0;
    //T.C = O(n+m)
    while (row >= 0 && col < m)
    {
        if (mat[row][col] == key)
        {
            cout << "Key found..\n";
            cout << "The indices are : " << "(" << row << "," << col << ")";
            return true;
        }
        else if (mat[row][col] > key)
        {
            //Up
            row--;
        }
        else
        {
            // Down
            col++;
        }
    }
    cout<<"Key not found\n";
    return false;
}

int main()
{
    int mat[4][4] = {{10, 20, 30, 40},
                     {15, 25, 35, 45},
                     {27, 29, 37, 48},
                     {32, 33, 39, 50}};
    int key = 29;
    StairCase_Search(mat, 4, 4, key);
    return 0;
}