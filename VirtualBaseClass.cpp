/*#include<iostream>
using namespace std;

class Student
{
    protected:
        int roll_no;
    public:
        void set_rollno(int r)
        {
            roll_no = r;
        }
        void get_rollno()
        {
            cout<<"The Student Roll Number is : "<<roll_no<<endl;
        }
};
class Test : public virtual Student
{
    protected:
        float phy;
        float chem;
        float maths;
    public:
        void set_marks(float m1,float m2,float m3)
        {
            phy = m1;
            chem = m2 ;
            maths = m3;
        }
        void get_marks()
        {
            cout<<"The Marks of the student in subjects : "<<endl
                <<"Physics - "<<phy<<endl
                <<"Chemistry - "<<chem<<endl
                <<"Maths - "<<maths<<endl;
        }
};
class Sport : virtual public Student
{
    protected:
        int score;
    public:
        void set_score(int s)
        {
            score = s;
        }
        void get_score()
        {
            cout<<"The Score of the Student in PT : "<<score<<endl;
        }
};
class Result : public Test , public Sport
{
    private:
        float result;
    public:
        void get_result()
        {
            result = phy+chem+maths+score;
            get_rollno();
            get_marks();
            get_score();
            cout<<"The Result of the Student is : "<<result<<endl;
        }
};
int main()
{
    Result Yuvraj;
    Yuvraj.set_rollno(266);
    Yuvraj.set_marks(80.0,75.0,99.9);
    Yuvraj.set_score(9);
    Yuvraj.get_result();
    return 0;
}
*/



#include<iostream>
using namespace std;

class Student
{
    protected:
        int roll_no;
    public:
        void set_rollno(int r)
        {
            roll_no = r;
        }
        void get_rollno()
        {
            cout<<"The Roll Number of the Student is : "<<endl;
        }
};
class Acadmic : virtual public Student
{
    protected:
        float total;
    public:
        void set_total(int t)
        {
            total = t;
        }
        void get_total()
        {
            cout<<"The Total Acadmic marks of the Student is : "<<total<<endl;
        }
};
class Domain : virtual public Student
{
    protected:
        float marks;
    public:
        void set_marks(int m)
        {
            marks = m;
        }
        void get_marks()
        {
            cout<<"The Domain Marks of the Student is : "<<marks<<endl;
        }
};
class Result : public Acadmic , public Domain
{
    private:
        float result;
    public:
        void get_result()
        {
            result = total + marks;
            get_rollno();
            get_total();
            get_marks();
            cout<<"The Total Result of the Student in Acadmic and Domain is : "<<result<<endl;
        }
};
int main()
{
    Result Yuvraj;
    Yuvraj.set_rollno(266);
    Yuvraj.set_total(800);
    Yuvraj.set_marks(90);
    Yuvraj.get_result();
    return 0;
}

