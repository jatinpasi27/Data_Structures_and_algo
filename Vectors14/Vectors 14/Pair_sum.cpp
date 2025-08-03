#include <iostream>
#include <vector>
using namespace std;

vector<int> Pair_Sum(vector<int> vec, int target)
{
    int st = 0;
    int end = vec.size() - 1;
    vector<int> ans;
    int currsum = 0;
    while (st < end)
    {
        currsum = vec[st] + vec[end];
        if (currsum == target)
        {
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
        else if (currsum > target)
        {
            end--;
        }
        else
        {
            st++;
        }
    }
    return ans;
}

int main()
{
    vector<int> vec = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = Pair_Sum(vec, target);
    cout<<"The indcies are : ("<<ans[0]<<","<<ans[1]<<")"<<endl;
    return 0;
}