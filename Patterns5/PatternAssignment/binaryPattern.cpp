#include <iostream>
using namespace std;
int main()
{
    int n;
    int val = true;
    cout << "Enter the number:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << val << " ";
            val = !val;
        }
        cout << endl;
    }
    return 0;
}