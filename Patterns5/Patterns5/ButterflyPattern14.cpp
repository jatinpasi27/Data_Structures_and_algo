#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    // 1st part
    for (int i = 1; i <= n; i++)
    {
        //stars
        for(int j = 1;j<=i;j++){
            cout<<"*"<<" ";
        }
        //spaces
        for(int k = 1;k<=2*(n-i);k++){
            cout<<" "<<" ";
        }
        for (int l = 1; l <= i; l++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    //2nd Part
    for (int i = n; i >= 1; i--)
    {
        //stars
        for(int j = 1;j<=i;j++){
            cout<<"*"<<" ";
        }
        //spaces
        for(int k = 1;k<=2*(n-i);k++){
            cout<<" "<<" ";
        }
        for (int l = 1; l <= i; l++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}