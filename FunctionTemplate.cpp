/*#include<iostream>
using namespace std;
float funcavg(int a,int b)
{
    float avg = (a+b)/2.0;
    return avg;
}
int main()
{
    float a;
    a = funcavg(5,2);
    cout<<"The Average of the numbers are : "<<a<<endl;
    return 0;
}*/


//USING TEMPLATE IN FUNCTION

#include<iostream>
using namespace std;
template<class T1 ,class T2>
float funcavg(T1 a,T2 b)
{
    float avg = (a+b)/2.0;
    return avg;
}
int main()
{
    float a;
    a = funcavg(5,2.5);
    cout<<"The average of the numbers are : "<<a<<endl;
    return 0;
}