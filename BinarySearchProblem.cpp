//FIND FIRST AND LAST POSITION/OCCURENCE AND TOTAL OCCURENCE OF AN ELEMENT IN AN SORTED ARRAY


// #include<iostream>
// using namespace std;
// int firstOccurence(int A[],int size,int key)
// {
//     int start=0;
//     int end=size-1;
//     int mid = (start+end)/2;
//     int ans = -1;
//     while(start<=end)
//     {
//         if(A[mid]==key)
//         {
//             ans = mid;
//             end = mid-1;
//         }
//         else if(A[mid]<key)
//         {
//             start = mid+1;
//         }
//         else
//         {
//             end = mid-1;
//         }  
//         mid = (start+end)/2; 
//     }
//     return ans; 
// }
// int lastOccurence(int A[],int size,int key)
// {
//     int start=0;
//     int end=size-1;
//     int mid = (start+end)/2;
//     int ans = -1;
//     while(start<=end)
//     {
//         if(A[mid]==key)
//         {
//             ans = mid;
//             start = mid+1;
//         }
//         else if(A[mid]<key)
//         {
//             start = mid+1;
//         }
//         else
//         {
//             end = mid-1;
//         }  
//         mid = (start+end)/2;  
//     }
//     return ans;
// }
// int main()
// {
//     int a[7] = {1,2,3,3,3,4,5};
//     int b[11] = {1,2,3,3,4,4,4,4,4,4,5};
//     cout<<"The First Occurence/Position of 3 in Array a[] is an index : "<<firstOccurence(a,7,3)<<endl;
//     cout<<"The Last Occurence/Position of 3 in Array a[] is an index : "<<lastOccurence(a,7,3)<<endl;
//     cout<<"Total Occurence of 3 in an array is : "<<lastOccurence(a,7,3)-firstOccurence(a,7,3)+1<<endl;
//     cout<<endl;
//     cout<<"The First Occurence/Position of 4 in Array b[] is an index : "<<firstOccurence(b,11,4)<<endl;
//     cout<<"The Last Occurence/Position of 4 in Array b[] is an index : "<<lastOccurence(b,11,4)<<endl;
//     cout<<"Total Occurence of 4 in an array is : "<<lastOccurence(b,11,4)-firstOccurence(b,11,4)+1<<endl;
//     cout<<endl;
//     cout<<"The First Occurence/Position of 3 in Array b[] is an index : "<<firstOccurence(b,11,3)<<endl;
//     cout<<"The Last Occurence/Position of 3 in Array b[] is an index : "<<lastOccurence(b,11,3)<<endl;
//     cout<<"Total Occurence of 3 in an array is : "<<lastOccurence(b,11,3)-firstOccurence(b,11,3)+1<<endl;
//     return 0;
// }




// FIND PEAK INDEX IN A MOUNTAIN ARRAY

// #include<iostream>
// using namespace std;
// int peakIndex(int A[],int n)
// {
//     int s=0,e=n-1,mid = (s+e)/2;
//     while(s<e)
//     {
//         if(A[mid]< A[mid+1]){
//             s = mid+1;
//         }
//         else{
//             e = mid;
//         }
//         mid = (s+e)/2;
//     }
//     return s;
// }
// int main()
// {
//     int a[6] = {3,4,5,6,2,1};
//     cout<<"The Peak Element is an index : "<<peakIndex(a,6)<<endl;
//     return 0;
// }




// FIND INDEX OF PIVOT VALUE IN AN ARRAY 

// #include<iostream>
// using namespace std;
// int pivot(int A[],int n)
// {
//     int s=0,e=n-1,m=(s+e)/2;
//     while(s<e)
//     {
//         if(A[m]>=A[0])
//         {
//             s = m+1;

//         }
//         else{
//             e = m;
//         }
//         m=(s+e)/2;
//     }
//     return s;
// }
// int main()
// {
//     int A[5] = {7,10,18,1,3};  //HERE 1 IS PIVOT ELEMENT
//     cout<<"The index of a Pivot Element is : "<<pivot(A,5)<<endl;
//     return 0;
// }

// SEARCH IN ROTATED SORTED ARRAY

// #include<iostream>
// using namespace std;
// int getPivot(int A[],int n)
// {
//     int s=0,e=n-1,m=(s+e)/2;
//     while(s<e) {

//         if(A[m] >= A[0])
//         {
//             s = m+1;
//         }
//         else{
//             e = m;
//         }
//         m = s + (e-s)/2;
//     }
//     return s;
// }
// int binarySearch(int A[], int s, int e, int key) {

//     int start = s;
//     int end = e;

//     int mid = start + (end-start)/2;

//     while(start <= end) {

//         if(A[mid] == key) {
//             return mid;
//         }

//         //go to right wala part
//         if(key > A[mid]) {
//             start = mid + 1;
//         }
//         else{ //key < arr[mid]
//             end = mid - 1;
//         }

//         mid = start + (end-start)/2;
//     }
    
//     return -1;
// }
// int search(int arr[], int n, int k)
// {
//     int pivot = getPivot(arr, n);
//     if( k >= arr[pivot] && k <= arr[n-1])
//     {//BS on second line
//         return binarySearch(arr, pivot, n-1, k);
//     }
//     else
//     {//BS on first line
//         return binarySearch(arr, 0, pivot - 1, k);
//     }
    
// }
// int main()
// {
//     int a[10] = {6,7,8,9,0,1,2,3,4,5};
//     cout<<search(a,10,5)<<endl;
//     cout<<search(a,10,0)<<endl;
//     cout<<search(a,10,7)<<endl;
//     cout<<search(a,10,2)<<endl;
//     cout<<search(a,10,15)<<endl;
//     return 0;
// }


// FIND SQUARE ROOT USING BINARY SEARCH 


// #include<iostream>
// using namespace std;
// int B_Search(int n)
// {
//     int s=0,e=n-1,m=(s+e)/2;
//     int ans = -1;
//     while(s<=e)
//     {
//         int square = m*m;
//         if(square==n)
//         {
//             return m;
//         }
//         if(square<n)
//         {
//             ans = m;
//             s = m+1;
//         }
//         else
//         {
//             e = m-1;
//         }
//         m = (s+e)/2;
//     }
//     return ans;
// }
// double morePercision(int n,int percision,int tempSol) // Percision : After decimal how much value you want 
// {
//     double factor = 1;
//     double ans = tempSol;
//     for(int i=0;i<percision;i++)
//     {
//         factor = factor/10;
//         for(int j=ans;j*j<n;j+=factor)
//         {
//              ans = j;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     cout<<"Enter the Number : ";
//     cin>>n;
//     int tempSol = B_Search(n);
//     cout<<"Answer is : "<<morePercision(n,3,tempSol);
//     return 0;
// }