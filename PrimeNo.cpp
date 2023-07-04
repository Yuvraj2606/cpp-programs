// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter Number : ";
//     cin>>n;
//     if( n=2 || n>=3 )
//     {
//         cout<<"It is prime";
//     }
//     else if(n%2 == 0)
//     {
//         cout<<"It is not prime";
//     }
//     else if(n%3 == 0)
//     {
//         cout<<"It is not prime";
//     }
//     else
//     {
//         cout<<"It is prime number ";
//     }
//     return 0;
// }



#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool isPrime = 1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            isPrime = 0;
        }
    }
        if(isPrime==0)
        {
            cout<<"n is Not a Prime Number";
        }
        else
        {
            cout<<"n is a Prime Number";
        }
    return 0;
}