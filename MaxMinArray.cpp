// #include<iostream>
// using namespace std;
// int getMax(int A[],int n)
// {
//     int maxi = INT16_MIN;
//     for(int i=0;i<n;i++)
//     {
//         if(A[i]>maxi)
//         {
//             maxi = A[i];
//         }
//     }
//     return maxi;

// }
// int getMin(int A[],int n)
// {
//     int mini = INT16_MAX;
//     for(int i=0;i<n;i++)
//     {
//         if(A[i]<mini)
//         {
//             mini = A[i];
//         }
//     }
//     return mini;

// }
// int main()
// {
//     int arr[100],size;
//     cout<<"Enter the size of an Array : ";
//     cin>>size;
//     cout<<"Enter the elements of an Array : ";
//     for(int i=0;i<size;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"The Maximum Value of an Array is : "<<getMax(arr,size)<<endl;
//     cout<<"The Minimum value of an Array is : "<<getMin(arr,size)<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;
int getMax(int A[],int n)
{
    int maxi = INT16_MIN;
    for(int i=0;i<n;i++)
    {
        maxi = max(maxi , A[i]);
    }
    return maxi;

}
int getMin(int A[],int n)
{
    int mini = INT16_MAX;
    for(int i=0;i<n;i++)
    {
        mini = min(mini , A[i]);
    }
    return mini;

}
int main()
{
    int arr[100],size;
    cout<<"Enter the size of an Array : ";
    cin>>size;
    cout<<"Enter the elements of an Array : ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"The Maximum Value of an Array is : "<<getMax(arr,size)<<endl;
    cout<<"The Minimum value of an Array is : "<<getMin(arr,size)<<endl;
    return 0;
}