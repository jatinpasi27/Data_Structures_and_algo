#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> vec1 = {1,2,3,343,546};
vector<int> vec2(11,-1);
cout<<"The size of the vector is : "<<vec1.size()<<endl;
cout<<"The size of the vector is : "<<vec2.size()<<endl;
for (int i = 0; i < vec1.size(); i++)
{
    cout<<vec1[i]<<" ";
}

return 0;
}