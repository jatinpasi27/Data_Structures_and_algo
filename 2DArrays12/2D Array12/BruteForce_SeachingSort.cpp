#include <iostream>
using namespace std;
void Searching(int mat[][4], int n, int m)
{
    int key = 10;
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (key == mat[i][j])
            {
                found = true;
                cout <<"The index are: "<< "(" << i << "," << j << ")";
                // return (i, j); // return indices as a pair
                break;
            }
            
        }
        
            
    }
   if(found != true){
    cout<<"Key Value not found..";
   }
    }
    
    // return (-1,-1);


int main()
{
    int mat[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};
    Searching(mat, 4, 4);
    return 0;
}