#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[10],n;
    cout<<"Enter Size of an Array : ";
    cin>>n;
    cout<<"Enter an elements of an Array : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr , arr+n);
    cout<<"Sorted Array : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;;
    }
    return 0;
}