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

// #include<iostream>
// using namespace std;
// int main()
// {
//     int i;
//     int A[]={1,2,3,4,5,6,7,8,9};
//     do
//     {
//         cout<<"The Elements of A["<<i<<"] is : "<<A[i]<<endl;
//         i++;
//     } 
//     while(i<9);
//     return 0;
//  }

#include<iostream>
using namespace std;
int main()
{
     int third[] = {2,7,3};
     char ch[5] = {'a', 'b', 'c', 'r', 'p'}; 
     double firstDouble[5];
     float firstFloat[6];
     bool firstBool[9];
    //int n = 15;
    //printArray(third, 15);
    int thirdSize = sizeof(third)/sizeof(int);
    int chsize = sizeof(ch);
    int dsize = sizeof(firstDouble)/sizeof(double);
    int fsize = sizeof(firstFloat)/sizeof(float);
    int bsize = sizeof(firstBool);
    cout<<" Size of Third is " << thirdSize <<endl;
    cout<<"Size of ch is : "<<chsize<<endl;
    cout<<"Size of double is : "<<dsize<<endl;
    cout<<"Size of float is : "<<fsize<<endl;
    cout<<"Size of bool is : "<<bsize<<endl;
    return 0;
}
