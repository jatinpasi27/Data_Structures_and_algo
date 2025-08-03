#include<iostream>
using namespace std;
int main(){
    // Static memory allocation.
    //int arr[100] = {12,32,4,5,54,34,2,43,53,45,43};
 int size;
 cin>>size;

 int *arr = new int[size];
//  arr[0] => *(arr+0);
//  arr[1] => *(arr+1);
//  arr[2] => *(arr+2);
int x = 1;
for (int i = 0; i < size; i++)
{
    arr[i] = x;
    cout<<arr[i]<<" ";
    x++;
}
cout<<endl;

return 0;
}