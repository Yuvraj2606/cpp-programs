// #include<iostream>
// using namespace std;
// int update(int arr[],int n)
// {
//     cout<<"Inside the Function"<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<endl;
//     }
//     cout<<"Now main() Time"<<endl;
// }
// int main()
// {
//     int arr[] = {1,2,3};
//     update(arr,3);
//     for(int i=0;i<3;i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }


#include<iostream>
using namespace std;
int update(int arr[],int n)
{
    arr[0] = 3;
    cout<<"Inside the Function"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"Now main() Time"<<endl;
}
int main()
{
    int arr[] = {1,2,3};
    update(arr,3);
    for(int i=0;i<3;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}