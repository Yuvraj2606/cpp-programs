#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[], int n)
{   int pos;
    for(int i = 0; i < n-1; i++ ) {
        pos = i;
        
        for(int j = i+1; j<n; j++) {
            
            if(arr[j] < arr[pos]) 
                pos = j;
            
        }
        swap(arr[pos], arr[i]);
    }

}
int main()
{
    int a[5] = {10,9,11,7,1};
    cout<<"Array : ";
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"The Sorted array : ";
    selectionSort(a,5);
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}