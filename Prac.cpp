#include<iostream>
using namespace std;
/*int main()
{
    char ch,num;
    cout<<"Enter Your Character : ";
    cin>>ch;
    if(ch>='a' && ch<='z')
    {
        cout<<"Enter Character is in Lower Case";
    }
    else if(ch>='A' && ch<='Z')
    {
        cout<<"Enter Character is in Upper Case";
    }
    else if (ch>='0' && ch<='9'
    )
    {
        cout<<"Enter Character is a Number";
    }
    else
    {
        cout<<"Enter Character is not a Alphabet as well as Number ";
    }
    return 0;
}*/


/*int main()
{
    int n,sum=0,i=0;
    cout<<"Enter Number : ";
    cin>>n;
    while(i<=n)
    {
        sum = sum+i;
        i++;
    }
    cout<<"The Sum is : "<<sum<<endl;
    return 0; 
}*/


/*int main()
{
    int n,sum=0,i=2;
    cout<<"Enter Number : ";
    cin>>n;
    while(i<=n)
    {
        sum = sum+i;
        i = i+2;
    }
    cout<<"The Sum is : "<<sum<<endl;
    return 0; 
}*/

/*int main()
{
    int a,b;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"Enter the value of b : ";
    cin>>b;
    if(a>b)
    {
        cout<<"a is greater than b ";
    }
    else{
        cout<<"b is greater than a ";
    }
    return 0;
}*/


// int main()
// {
//     int a;
//     cout<<"Enter the value of a : ";
//     cin>>a;
//     if(a<0)
//     {
//         cout<<"a is negative";
//     }
//     else if(a==0)
//     {
//         cout<<"a is 0";
//     }
//     else{
//         cout<<"a is positive";
//     }
//     return 0;
// }

int main()
{
    int n,sum =0;
    cin>>n;
    for (int i = 0; i <=n; i++)
    {
       sum = sum+i;
    }
    cout<<"The sum is : "<<sum<<endl;
    return 0;
}