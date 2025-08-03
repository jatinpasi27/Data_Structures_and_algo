#include <iostream>
using namespace std;

void Func1(int mat[][4], int n, int m)
{
    cout << "0th row pointer : " << mat << endl;
    cout << "1st row pointer : " << mat + 1 << endl;
    cout << "2nd row pointer : " << mat + 2 << endl;
    cout << "Line break" << endl
         << endl;
    cout << "0th row value :  " << *mat << endl;
    cout << "1st row value :  " << *(mat + 1) << endl;
    cout << "2nd row value :  " << *(mat + 2) << endl;
}

void Func2(int (*mat)[4], int n, int m)
{
    // Finding the value using pointer approach through dereferencing operator.
    cout << *(*(mat + 2) + 2) << endl;
}
int main()
{
    int mat[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};
    Func1(mat, 4, 4);
    Func2(mat, 4, 4);
    return 0;
}