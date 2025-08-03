#include<iostream>
using namespace std;
void funcInt(){
    int *ptr1 = new int;
    *ptr1 = 5;
    cout<<*ptr1<<endl;
    delete ptr1; //free the int variable
}
void func(){
    int size;
    cout<<"Enter the size of an array: ";
    cin>>size;

    int *ptr = new int[size];
    int x = 1;
    for(int i = 0;i<size;i++){
        ptr[i] = x;
        cout<<ptr[i]<<" ";
        x++;
    }
    cout<<endl;
    delete [] ptr;
}
int main(){
    func();
    funcInt();
    return 0;
}