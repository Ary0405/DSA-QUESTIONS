#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];

    //Taking input 
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }

    //Swapping pos i and n - i - 1
    for(int i = 0 ; i < n/2 ; i++)
    {
        swap(arr[i] , arr[n-i-1]);
    }

    //Printing reverse array
    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
    return 0;
}