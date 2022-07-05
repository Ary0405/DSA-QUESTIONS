#include "../bits/stdc++.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    map<int , int> mp;
    for(int i = 0 ; i < n ; i++)
    {
        mp[arr[i]]++;
    }
    map<int,int> :: iterator it;
    for(it = mp.begin() ; it!=mp.end() ; it++)
    {
        if(it->second >=2) {
            cout<<"true"<<endl;
            return 0;
        }
    }
    cout<<"false"<<endl;
    return 0;
}