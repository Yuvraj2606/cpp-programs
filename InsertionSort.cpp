// #include<iostream>
// using namespace std;
// void insertionSort(int A[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         int temp = A[i];
//         int j;
//         for(j=i-1;j>=0;j++)
//         {
//             if(A[j]>temp)
//             {
//                 A[j+1] = A[j];
//             }
//             else{
//                 break;
//             }
//         }
//         A[j+1] = temp;
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
//     insertionSort(a,6);
//     printArray(a,6);
//     return 0;
// }

#include<iostream>
using namespace std;
int insertionSort(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        int temp = A[i];
        int j=i-1;
        while((j>=0)&&(temp<A[j]))
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = temp;
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
    insertionSort(a,6);
    printArray(a,6);
    return 0;
}


// Now, let's understand how the insertion sort algorithm works:

// Imagine you have a deck of cards faced down in your hand, and you want to sort them. You start with an empty left hand and pick one card at a time from the deck (unsorted part) and insert it into the correct position in your left hand (sorted part).

// In the code, the variable i represents the index of the card we are currently holding in our hand (starting from the first card).

// We store the value of the card in the variable temp.

// The variable j represents the index of the card in our left hand, which we compare with the card in our right hand (temp). We move cards in the left hand to the right until we find the correct position to insert the card.

// The while loop (j >= 0) && (temp < A[j]) checks if the card in our left hand (A[j]) is greater than the card in our right hand (temp). If it is, we move the card in the left hand one position to the right (A[j+1] = A[j]) to make space for the card in the right hand.

// We repeat this process until we find the correct position to insert the card from our right hand, and then we place it there: A[j+1] = temp.

// After the loop, the array will be sorted in ascending order.

// The printArray function is used to print the elements of the array to see the sorted result.

// When you run this code, you will see the output with the original array and the sorted array printed on the screen.





