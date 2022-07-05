#include "../bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i ++)
    {
        cin>>arr[i];
    }
    int curr_sum = 0;
    int max_sum = INT_MIN;
    for(int i = 0 ; i < n ; i++)
    {
        curr_sum += arr[i];
        if(curr_sum < arr[i])
        {
            curr_sum = arr[i];
        }
        max_sum = max(curr_sum , max_sum);
    }
    cout<<max_sum<<endl;
    return 0;
}