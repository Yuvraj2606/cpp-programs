#include<iostream>
using namespace std;

class Student
{
    protected:
        int roll_no;
    public:
        void setroll_no(int r)
        {
            roll_no = r;
        }
        void getroll_no()
        {
            cout<<"The Roll Number of the Student is : "<<roll_no<<endl;
        }
};
class Exam : public Student
{
    protected:
        float physics;
        float chemistry;
        float maths;
    public:
        void setmarks(float m1,float m2,float m3)
        {
            physics = m1;
            chemistry = m2;
            maths = m3;
        }
        void getmarks()
        {
            cout<<"The Marks of Student in Physics : "<<physics<<endl;
            cout<<"The Marks of Student in Chemistry : "<<chemistry<<endl;
            cout<<"The Marks of Student in Maths : "<<maths<<endl;
        }
};
class Result : public Exam
{
    /*protected:
        float perc;*/
    public:
        /*void setperc()
        {
            perc = (physics+chemistry+maths)/3;
        }*/
        void getperc()
        {
            getroll_no();
            getmarks();
            cout<<"The Percentage of the Student is : "<<(physics+chemistry+maths)/3<<"%"<<endl;
        }
};
int main()
{
    Result Yuvraj;
    Yuvraj.setroll_no(266);
    Yuvraj.setmarks(80.0,76.0,99.0);
    Yuvraj.getperc();
    return 0;
}