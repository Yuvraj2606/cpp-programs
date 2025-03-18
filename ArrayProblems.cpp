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

// DUPLICATE IN ARRAY

// #include<iostream>
// using namespace std;
// int duplicate(int arr[],int size)
// {
//     int ans = 0;
//     for(int i=0;i<size;i++)
//     {
//         ans = ans^arr[i];
//     }
//     for(int i=1;i<size;i++)
//     {
//         ans = ans^i;
//     }
//     // return ans;
//     cout<<"The Duplicate element is : "<<ans<<endl;
// }
// int main()
// {
//     int a[10] = {1,2,3,4,5,6,7,8,9,6};
//     // cout<<"The Duplicate element is : "<<duplicate(a,10)<<endl;
//     duplicate(a,10);
//     return 0;
// }

// MERGE TWO SORTED ARRAY

// #include <iostream>
// using namespace std;
// void merge(int arr1[], int m, int arr2[], int n, int *arr3)
// { // arr1[] = {1,3,5,7} 3 arr2[] = {2,4,6} 3  k=1 arr3={1,2,3,4,5,6}
//     int k = 0;
//     int i = 0, j = 0;
//     while (i < m && j < n)
//     {
//         if (arr1[i] <= arr2[j])
//         {
//             arr3[k] = arr1[i];
//             i++;
//             k++;
//         }
//         else
//         {
//             arr3[k] = arr2[j];
//             j++;
//             k++;
//         }
//     }
//     while (i < m)
//     { // i=3 m->4 k=7
//         arr3[k] = arr1[i];
//         i++;
//         k++;
//     }
//     while (j <n)
//     { // j=3 n->3,k=7
//         arr3[k] = arr2[j];
//         j++;
//         k++;
//     }
// }
// void print(int *arr, int n)
// {
//     cout << "Merged Sorted Array : ";
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     int arr1[3] = {1,2,3};
//     int arr2[3] = {2, 5, 6};
//     int arr3[7];
//     cout<<"Array 1 is :" ;
//     for(int i=0;i<3;i++)
//     {
//         cout<<arr1[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"Array 2 is : ";
//     for(int i=0;i<3;i++)
//     {
//         cout<<arr2[i]<<" ";
//     }
//     cout<<endl;
//     merge(arr1, 3, arr2, 3, arr3);
//     print(arr3, 6);
//     return 0;
// }

// MOVE ZEROES IN RIGHT SIDE

// #include<iostream>
// using namespace std;
// void moveZeroes(int a[],int n)
// {
//     int i=0;
//     for(int j=0;j<n;j++)
//     {
//         if(a[j] != 0)
//         {
//             swap(a[j],a[i]);
//             i++;
//         }
//     }
// }
// void print(int a[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// int main()
// {
//     int a[6] = {0,1,0,3,12,0};
//     cout<<"Array is : ";
//     print(a,6);
//     moveZeroes(a,6);
//     cout<<"Output is : ";
//     print(a,6);
//     return 0;
// }

// ROTATE ARRAY

// #include <iostream>
// using namespace std;
// void rotate(int *a, int n, int k)
// {
//     int temp[n];
//     for (int i = 0; i < n; i++)
//     {
//         temp[(i + k) % n] = a[i];
//     }
//     a = temp;
// }
// void print(int *a, int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
// }
// int main()
// {
//     int arr[5] = {1, 2, 3, 4, 5};
//     int k = 2;

//     rotate(arr, 5, k);
//     print(arr, 5);
//     return 0;
// }
