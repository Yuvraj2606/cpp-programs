 /*#include<iostream>
using namespace std;

class Number
{
    int a;
    public:
        Number()
        {
            a = 0;
        }
        Number(int num)
        {
            a = num;
        }
        Number(Number &obj)
        {
            a=obj.a;  //Copy Constructor is Called
        }
        void disp()
        {
            cout<<"The object of Number who's value is : "<<a<<endl;
        }
};
int main()
{
    Number n1,n2,n3=9;
    n1.disp();
    n2.disp();
    n3.disp();
    
    Number z(n3);
    z.disp();
    return 0;
}*/


#include<iostream>
#include<string.h>
using namespace std;
class student
{
	int rno;
	char name[50];
	double fee;
	public:
	student(int,char[],double)
    {
		rno=no;
		strcpy(name,n);
		fee=f;
	}

	student(student &t)	 //copy constructor
	{
		rno=t.rno;
		strcpy(name,t.name);
		fee=t.fee;
	}
	void display()
    {
		cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
	}
	
};	
int main()
{
	student s(1001,"Manjeet",10000);
	s.display();
	
	student manjeet(s); //copy constructor called
	manjeet.display();
	
	return 0;
}
