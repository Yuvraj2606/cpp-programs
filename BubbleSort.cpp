// #include<iostream>
// using namespace std;
// int  bubbleSort(int A[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n-i;j++)
//         {
//             if(A[j]>A[j+1])
//             {
//                 int temp = A[j];
//                 A[j] = A[j+1];
//                 A[j+1] = temp;
//             }
//         }
//     }
// }
// int printArray(int A[],int n)
// {
//     for(int k=0;k<n;k++)
//     {
//         cout<<A[k]<<" ";
//     }
// }
// int main()
// {
//     int a[6] = {10,1,7,6,14,9};
//     cout<<"Array is : ";
//     printArray(a,6);
//     cout<<endl;
//     cout<<"The Sorted Array : ";
//     bubbleSort(a,6);
//     printArray(a,6);
//     return 0;
// }


#include<iostream>
using namespace std;
void bubbleSort(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(A[j]>A[j+1])
            {
                swap(A[j],A[j+1]);
            }
        }
    }
}
int printArray(int A[],int n)
{
    for(int k=0;k<n;k++)
    {
        cout<<A[k]<<" ";
    }
}
int main()
{
    int a[6] = {10,1,7,6,14,9};
    cout<<"Array is : ";
    printArray(a,6);
    cout<<endl;
    cout<<"The Sorted Array : ";
    bubbleSort(a,6);
    printArray(a,6);
    return 0;
}