/*#include<iostream>
using namespace std;
int main()
{
    int marks[]={23,45,56,89};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    return 0;
}*/


//PRINT AN ARRAY BY USING FOR LOOP

/*#include<iostream>
using namespace std;
int main()
{
    int A[]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<=8;i++)
    {
        cout<<"The Elements of A["<<i<<"] is : "<<A[i]<<endl;
    }
    return 0;
}*/



//PRINT AN ARRAY BY USING WHILE LOOP

/*#include<iostream>
using namespace std;
int main()
{
    int i;
    int A[]={1,2,3,4,5,6,7,8,9};
    while(i<9)
    {
        cout<<"The Elements of A["<<i<<"] is : "<<A[i]<<endl;
        i++;
    }
    return 0;
}*/



//PRINT AN ARRAY BY USING DO-WHILE LOOP

#include<iostream>
using namespace std;
int main()
{
    int i;
    int A[]={1,2,3,4,5,6,7,8,9};
    do
    {
        cout<<"The Elements of A["<<i<<"] is : "<<A[i]<<endl;
        i++;
    } 
    while(i<9);
    return 0;
}
