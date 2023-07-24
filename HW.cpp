#include<iostream>
using namespace std;
int main()
{
    int n,arr[100],sum=0;
    cout<<"Enter the size of an array : ";
    cin>>n;
    cout<<"The Array is : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        sum = sum+arr[i];
    }
    cout<<"The sum of elements of an array : "<<sum<<endl;
    return 0;
}