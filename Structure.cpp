/*#include<iostream>
using namespace std;
struct student
{
    int roll_no;
    char section;
    float marks;
    int total;
};
int main()
{
    struct student Yuvraj;
    Yuvraj.roll_no = 266;
    Yuvraj.section = 'D';
    Yuvraj.marks = 1253;
    Yuvraj.total = 1800;
    cout<<"Roll number of the student : "<<Yuvraj.roll_no<<endl;
    cout<<"Section of the student : "<<Yuvraj.section<<endl;
    cout<<"Marks of the student : "<<Yuvraj.marks<<endl;
    cout<<"Total Marks : "<<Yuvraj.total<<endl;
    return 0;
}*/


#include<iostream>
using namespace std;
struct employee
{
    double E_id;
    int salary;
    string post;
};
int main()
{
    struct employee Yuvraj;
    Yuvraj.E_id = 2000330100266;
    Yuvraj.salary = 100000;
    Yuvraj.post ="Web Development and Design Intern";
    cout<<"Employee Id is : "<<Yuvraj.E_id<<endl;
    cout<<"Salary of an Employee : "<<Yuvraj.salary<<endl;
    cout<<"Post of an Employee : "<<Yuvraj.post<<endl;
    return 0;
}