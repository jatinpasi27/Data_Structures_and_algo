#include <iostream>
using namespace std;

// int DiagonalSum(int mat[][4], int n)
// {
//     int sum = 0;
//     //Time Complex = O(n^2)
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             //Primary Diagonal.
//             if (i == j)
//             {
//                 sum += mat[i][j];
//             }
//             else if (j == n - i - 1)
//             {
//                 sum += mat[i][j];
//             }
//         }
//     }
//     return sum;
// }

int DiagonalSum(int mat[][4], int n)
{
    int sum = 0;
    // Time Complex = O(n)

    for (int i = 0; i < n; i++)
    {
        // Primary Diagonal.
        sum += mat[i][i];
        if (i != n - i - 1)
        {
            sum += mat[i][i];
        }
    }

    return sum;
}
int main()
{
    int mat[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};
    cout << "The sum of Diagonals are : " << DiagonalSum(mat, 4);

    // int mat2[3][3] = {{1, 2, 3},
    //                  {4, 5, 6},
    //                  {7, 8, 9}};
    // cout<<"The sum of Diagonals are : "<<DiagonalSum(mat2,3);
    return 0;
}