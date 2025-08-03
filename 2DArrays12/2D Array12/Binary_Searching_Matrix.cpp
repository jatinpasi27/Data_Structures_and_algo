#include <iostream>
using namespace std;

void Binary_search(int mat[][4], int n, int m,int key)
{
    
    int srow = 0;
    int scol = 0;
    int erow = n - 1;
    int ecol = m - 1;
    bool isfound = false;
    while (srow < n)
    {
        int st = 0;
        int end = m-1;
        for (int i = scol; i <= ecol; i++)
        {
            int mid = (st + end)/2;
            if (key == mat[srow][i])
            {
                
                isfound = true;
                cout<<"The indices found to be: "<<"("<<srow<<","<<i<<")";
            }
            else if (key > mat[srow][i])            
            {
                st = mid + 1;
            }
            else{
                end = mid -1;
            }
        }
        srow++;
    }
    if (isfound != true)
    {
        cout << "Key not found in the matrix.";
    }
}

int main()
{
    int mat[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};
    Binary_search(mat, 4, 4,12);
    return 0;
}