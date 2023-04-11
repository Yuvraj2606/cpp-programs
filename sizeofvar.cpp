/*#include<iostream>
using namespace std;
int main()
{
    float d=34.4F;
    long double e = 34.4L;
    cout<<"The Size of 34.4 is : "<<sizeof(34.4)<<endl;
    cout<<"The Size of 34.4f is : "<<sizeof(34.4f)<<endl;
    cout<<"The Size of 34.4F is : "<<sizeof(34.4F)<<endl;
    cout<<"The Size of 34.4l is : "<<sizeof(34.4l)<<endl;
    cout<<"The Size of 34.4L is : "<<sizeof(34.4L)<<endl;
    return 0;
}*/





//REFERENCE VARIABLE 

#include<iostream>
using namespace std;
int main()
{
    float x = 45.5;
    float &y=x;
    cout<<x<<endl;
    cout<<y;
    return 0;
}



