//Maximum Product subarray
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int LongestConSub(int arr[],int n)
{
    int count=0,ans=0;
    sort(arr,arr+n);

    //store unique elements to the vector
    vector<int>vec;
    vec.push_back(arr[0]);

    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
        vec.push_back(arr[i]);
    }

    for(int i=0;i<vec.size();i++)
    {
        if(i>0 && vec[i]==vec[i-1]+1)
        count++;
        else
        count=1;

        ans=max(count,ans);
    }
    return ans;
}

int main()
{
    int arr[] = {1,9,3,10,4,20,2};
 
    int n = sizeof(arr) / sizeof(arr[0]);
 
    cout << "Longest Consecutive Subsequence is : "
         << LongestConSub(arr, n) << endl;
 
    return 0;
}
