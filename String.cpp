#include<iostream>
using namespace std;
// int main()
// {
//     char name[20] = "Yuvraj Varshney";
//     // cout<<"Enter your name : ";
//     // cin>>name;
//     cout<<"Your name is : "<<name<<endl;
//     return 0;
// }


// int main()
// {
//     char name[20];
//     cout<<"Enter the name : ";
//     cin>>name;
//     cout<<"Your name is : "<<name<<endl;
//     return 0;
// }

int main()
{
    char name[20];
    cout<<"Enter the name : ";
    cin.getline(name,20);
    cout<<"Your name is : "<<name<<endl;
    return 0;
}



