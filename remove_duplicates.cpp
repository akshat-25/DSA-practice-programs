#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &arr, int n)
{
    vector<int> ans;
    int cnt = 1;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]!=arr[j])
            ans.push_back(arr[i]);
        }
        
    }
    cout << cnt;
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    removeDuplicates(arr, n);

    return 0;
}