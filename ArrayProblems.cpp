// //SWAP ALTERNATE ELEMENTS OF AN ARRAY

// #include<iostream>
// using namespace std;
// int swapAlternate(int arr[],int n)
// {
//     for(int i=0;i<n;i+=2)
//     {
//         if(i+1<n)
//         {
//             swap(arr[i],arr[i+1]);
//         }
//     }
// }
// int printArray(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main()
// {
//     int arr[6] = {1,2,3,4,5,6};
//     int brr[5] = {1,2,3,4,5};

//     swapAlternate(arr,6);
//     printArray(arr,6);

//     swapAlternate(brr,5);
//     printArray(brr,5);

//     return 0;
// }


// FIND UNIQUE ELEMENT FROM ARRAY 

// #include<iostream>
// using namespace std;
// int unique(int arr[],int n)
// {
//     int ans=0;
//     for(int i=0;i<n;i++)
//          {
//         ans = ans^arr[i];
//     }
//     cout<<"That element is : "<<ans<<endl;;
// }
// int main()
// {
//     int a[7] = {1,2,3,4,3,2,1};
//     unique(a,7);
// return 0;
// }



//DUPLICATE IN ARRAY

#include<iostream>
using namespace std;
int duplicate(int arr[],int size)
{
    int ans = 0;
    for(int i=0;i<size;i++)
    {
        ans = ans^arr[i];
    }
    for(int i=1;i<size;i++)
    {
        ans = ans^i;
    }
    // return ans;
    cout<<"The Duplicate element is : "<<ans<<endl;
}
int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,6};
    // cout<<"The Duplicate element is : "<<duplicate(a,10)<<endl;
    duplicate(a,10);
    return 0;
}       