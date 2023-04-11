/*#include<iostream>
using namespace std;
class Student
{
    private: 
        int Roll_no;
    public:
        char sec;
        int mark;
        char grade;
        void setdata(int b);
        void getdata()
        {
            cout<<"The Roll Number of the Student : "<<Roll_no<<endl;
            cout<<"The Section of the Student : "<<sec<<endl;
            cout<<"The Marks of the Student : "<<mark<<endl;
            cout<<"The Grade of the Student : "<<grade<<endl;
        }
};
void Student::setdata(int b)
{
    Roll_no =b;
}
int main()
{
    Student Yuvraj;
    Yuvraj.sec = 'D';
    Yuvraj.mark = 1000;
    Yuvraj.grade = 'A';
    Yuvraj.setdata(266);
    Yuvraj.getdata();
    return 0;
}*/



#include<iostream>
using namespace std;
class Student
{
    private: 
        int roll_no;
        char name;
        float m1,m2,m3;
        float calculate()
        {
            total = m1+m2+m3;
            return(total/3);
        }
    public:
        void enter()
        {
            cout<<"Enter Roll Number : ";
            cin>>roll_no;
            cout<<"Enter Name : ";
            cin>>name;
            cout<<"Enter Marks : ";
            cin>>m1>>m2>>m3;
            perc=calculate();
        }
        void assign()
        {
            if(perc>=80)
            {
                grade='A';
            }
            else if(perc>=60)
            {
                grade='B';
            }
            else if(perc>=40)
            {
                grade='C';
            }
            else{
                grade='D';
            }
        }
        void display()
        {
            cout<<"Roll Number : "<<roll_no<<endl;
            cout<<"Name : "<<name<<endl;
            cout<<"Marks : "<<m1<<" "<<m2<<" "<<m3<<endl;
            cout<<"Total : "<<total<<endl;
            cout<<"Percentge : "<<perc<<endl;
            cout<<"Grade : "<<grade<<endl;
        }
    protected:
        float total;
        float perc;
        char grade;    
};
int main()
{
    Student S;
    S.enter();
    S.assign();
    S.display();
    return 0;
}
