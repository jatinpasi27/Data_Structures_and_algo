#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        // spaces
        for (int g = 1; g <= n - i; g++)
        {
            cout << " " << " ";
        }
        // left numbers printing.
        for (int j = i; j >= 1; j--)
        {
            cout << j << " ";
        }
        // right numbers printing.
        for (int j = 2; j <= i; j++)
        {
            cout << j << " ";
        }
        // for (int g = 1; g <= n - i; g++)
        // {
        //     cout << " " << " ";
        //     // cout << endl;
        // }
        cout << endl;
    }
    return 0;
}