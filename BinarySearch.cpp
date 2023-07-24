#include<iostream>
using namespace std;
int BinarySearch(int A[],int size,int key)
{
    int start=0;
    int end=size-1;
    int mid = (start+end)/2;
    // mid = start +(end-start)/2;
    while(start<=end)
    {
        if(A[mid]==key)
        {
            return mid;
        }
        else if(A[mid]<key)
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
        return -1;    
    }
}
int main()
{
    int A[50],n,num;
    cout<<"Enter the size of an Array A : ";
    cin>>n;
    cout<<"Enter an Array A : ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"Enter Number to be Searched : ";
    cin>>num;
    int found = BinarySearch(A,n,num);
    if(found==-1){
        cout<<"Number is not in an array";
    }
    else{
    cout<<"The Number is an Array at an index : "<<found<<endl;
    }
    return 0;
}

// #include<iostream>
// using namespace std;

// int binarySearch(int arr[], int size, int key) {

//     int start = 0;
//     int end = size-1;

//     int mid = start + (end-start)/2;

//     while(start <= end) {

//         if(arr[mid] == key) {
//             return mid;
//         }

//         //go to right wal part
//         if(key > arr[mid]) {
//             start = mid + 1;
//         }
//         else{ //key < arr[mid]
//             end = mid - 1;
//         }

//         mid = start + (end-start)/2;
//     }
    
//     return -1;
// }


// int main() { 

//     int even[6] = {2,4,6,8,12,18};
//     int odd[5] = {3, 8, 11, 14, 16};

//     int evenIndex = binarySearch(even, 6, 6);

//     cout << " Index of 6 is " << evenIndex << endl;

//     int oddIndex = binarySearch(odd, 5, 14);

//     cout << " Index of 14 is " << oddIndex << endl;


//     return 0;
// }
