#include <iostream>
using namespace std;
void Spiral(int mat[4][4], int n, int m)
{
    int srow = 0;
    int scol = 0;
    int erow = n - 1;
    int ecol = n - 1;

    while (srow<=erow && scol <= ecol) //odd matrix.
    {
        // top
        for (int j = scol; j <= ecol; j++)
        {
            cout << mat[srow][j] << " ";
        }

        // right
        for (int i = srow + 1; i <= erow; i++)
        {
            cout << mat[i][ecol]<<" ";
        }

        // bottom
        for (int j = ecol - 1; j >= scol; j--)
        {
            if(srow == erow){ //middle
                break;
            }
            cout << mat[erow][j] << " ";
        }
        // left
        for (int i = erow - 1; i >= srow + 1; i--)
        {
            if(scol == ecol){
                break; //middle.
            }
            cout << mat[i][scol]<<" ";
        }
        srow++;
        scol++;
        ecol--;
        erow--;
    }
    cout<<endl;
}

int main()
{
    int mat[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};
                     Spiral(mat,4,4);
    return 0;
}