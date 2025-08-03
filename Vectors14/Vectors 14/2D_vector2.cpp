#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //variabe size of rows this is possible coz of dynamic memory allocation.
    vector<vector<int>> mat = {{1, 2, 3},
                               {4, 5},
                               {7}};
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    
       
    }


    return 0;
}