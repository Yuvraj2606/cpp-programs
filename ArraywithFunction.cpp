#include<iostream>
using namespace std;
void printArray(int A[10],int n)
{
    //int A[10],n;
    for(int i =0;i<n;i++)
    {
        cin>>A[i];
    }
}
int main()
{
    int a[10],size;
    cout<<"Enter Size of an array : ";
    cin>>size;
    cout<<"The Array is : ";
    printArray(a,size);
    return 0;
}