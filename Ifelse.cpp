#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    if(age<18)
    {
        cout<<"You are unable to vote"<<endl;
    }
    else if(age==18)
    {
        cout<<"Verify your age"<<endl;
        cout<<"You are able to vote"<<endl;
    }
    else
    {
        cout<<"You are able to vote";
    }
    return 0;
}