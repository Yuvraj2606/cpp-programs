/*#include<iostream>
using namespace std;
class Base
{
    public:
        int var_base=1;
        void display()
        {
            cout<<"1 - The Value of variable of base class is : "<<var_base<<endl;
        }
};
class Derived:public Base
{
    public:
        int var_derived=2;
        void display()
        {
            cout<<"2 - The Value of variable of base class is : "<<var_base<<endl;
            cout<<"2 - The Value of variable of derived class is : "<<var_derived<<endl;

        }
};
int main()
{
    Base *base_pointer;
    Base obj_base;
    Derived obj_derived;
    base_pointer = &obj_derived;
    base_pointer->display();
    return 0;
}
*/

//IN ABOVE CODE THE BASE CLASS FUNCTION IS RUN AS SIMILAR AS POINTER TO DERIVED 
//NOW WE SEE USE OF VIRTUAL KEYWORD IN BELOW CODE IF WE USE "virtual" KEYWORD BEFORE THE DISPLAY FUNCTION OF BASE CLASS THE FUNTION OF DERIVED IS RUN



/*#include<iostream>
using namespace std;
class Base
{
    public:
        int var_base=1;
        virtual void display()
        {
            cout<<"1 - The Value of variable of base class is : "<<var_base<<endl;
        }
};
class Derived:public Base
{
    public:
        int var_derived=2;
        void display()
        {
            cout<<"2 - The Value of variable of base class is : "<<var_base<<endl;
            cout<<"2 - The Value of variable of derived class is : "<<var_derived<<endl;

        }
};
int main()
{
    Base *base_pointer;
    Base obj_base;
    Derived obj_derived;
    base_pointer = &obj_derived;
    base_pointer->display();
    return 0;
}*/


//IN ABOVE CODE WE SEE THE USE OF "virtual" KEYWORD USE.


/*#include<iostream>
using namespace std;
class Base
{
    public:
        int var_base=1;
        virtual void display()
        {
            cout<<"1 - The Value of variable of base class is : "<<var_base<<endl;
        }
};
class Derived:public Base
{
    public:
        int var_derived=2;
        void display()
        {
            cout<<"2 - The Value of variable of base class is : "<<var_base<<endl;
            cout<<"2 - The Value of variable of derived class is : "<<var_derived<<endl;

        }
};
int main()
{
    Base *base_pointer;
    Base obj_base;
    Derived obj_derived;
    base_pointer = &obj_derived;
    obj_base.display();
    base_pointer->display();
    return 0;
}*/



#include<iostream>
#include<cstring>
using namespace std;
class CWH
{
    protected:
        string title;
        float rating;
    public:
        CWH(string s,float r)
        {
            title = s;
            rating = r;
        }
        virtual void display(){}
};
class CWHVideo: public CWH
{
    float videolength;
    public:
        CWHVideo(string s,float r,float v1):CWH(s,r)
        {
            videolength = v1;
        }
        void display()
        {
            cout<<"This is a Video Title : "<<title<<endl;
            cout<<"Ratings : "<<rating<<endl;
            cout<<"Length of the video is : "<<videolength<<"minutes"<<endl;
        }
};
class CWHText : public CWH
{
    int words;
    public:
        CWHText(string s,float r, int wc):CWH(s,r)
        {
            words = wc;
        }
        void display()
        {
            cout<<"This is an amazing text tutorial with title "<<title<<endl;
            cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
            cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
        }
};
int main()
{
      string title;
    float rating, vlen;
    int words;

    // for Code With Harry Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);

    // for Code With Harry Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);

    CWH* tuts[2];
    tuts[0] = &djVideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}

