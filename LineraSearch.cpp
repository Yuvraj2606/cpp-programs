#include<iostream>
using namespace std;
bool search(int a[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int a[10] = {1,2,3,4,5,6,7,8,9,0};
    int key;
    cout<<"enter element which u want search : ";
    cin>>key;
    bool found = search(a,10,key);
    if(found)
    {
        cout<<"Present";
    }
    else{
        cout<<"Absent";
    }
    return 0;
}