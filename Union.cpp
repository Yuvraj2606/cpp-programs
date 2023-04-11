#include<iostream>
using namespace std;
union student
{
    int roll_no;
    char section;
    float marks;
    int total;
};
int main()
{
    union student Yuvraj;
    Yuvraj.roll_no = 266;
    cout<<"Roll number of the student : "<<Yuvraj.roll_no<<endl;
    Yuvraj.section = 'D';
    cout<<"Section of the student : "<<Yuvraj.section<<endl;
    Yuvraj.marks = 1253;
    cout<<"Marks of the student : "<<Yuvraj.marks<<endl;
    Yuvraj.total = 1800;
    cout<<"Total Marks : "<<Yuvraj.total<<endl;
    return 0;
}