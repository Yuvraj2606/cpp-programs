/*#include<iostream>
using namespace std;
class vector 
{
    public:
        int *arr;
        int size;
        vector(int m)
        {
            size = m;
            arr = new int[size];
        }
        int dotproduct(vector &v)
        {
            int d=0;
            for (int i = 0; i < size; i++)
            {
                d += this->arr[i] * v.arr[i];
            }
            return d;
        }
};
int main()
{
    vector v1(3);
    v1.arr[0] = 1;
    v1.arr[1] = 2;
    v1.arr[2] = 3;

    vector v2(3);
    v2.arr[0] = 4;
    v2.arr[1] = 5;
    v2.arr[2] = 6;

    int a = v1.dotproduct(v2);
    cout<<a<<endl;
    return 0;
}
*/


//IN ABOVE WE ONLY USE "int" DATATYPE 
// LET SEE USE OF TEMPLATE



/*#include<iostream>
using namespace std;
template <class T>
class Vector
{
    public:
        T *arr;
        int size;
        Vector(int m)
        {
            size = m;
            arr = new T[size];
        }
        T dotproduct(Vector &v)
        {
            T d=0;
            for (int i = 0; i < size; i++)
            {
                d += this->arr[i] * v.arr[i];
            }
            return d;
        }
};
int main()
{

    //HERE IN THIS WE USE INT FLOAT DOUBLE ETC

    Vector<float>v3(3);
    v3.arr[0] = 1.4;
    v3.arr[1] = 3.3;
    v3.arr[2] = 0.1;

    Vector<float>v4(3);
    v4.arr[0] = 0.1;
    v4.arr[1] = 1.90;
    v4.arr[2] = 4.1;
    float b = v3.dotproduct(v4);
    cout<<b<<endl;
    return 0;
}




#include<iostream>
using namespace std;
template <class T>
class Vector
{
    public:
        T *arr;
        int size;
        Vector(int m)
        {
            size = m;
            arr = new T[size];
        }
        T dotproduct(Vector &v)
        {
            T d=0;
            for (int i = 0; i < size; i++)
            {
                d += this->arr[i] * v.arr[i];
            }
            return d;
        }
};
int main()
{
    Vector<int>v1(3);
    v1.arr[0] = 1;
    v1.arr[1] = 2;
    v1.arr[2] = 3;

    Vector<int>v2(3);
    v2.arr[0] = 4;
    v2.arr[1] = 5;
    v2.arr[2] = 6;
    int a = v1.dotproduct(v2);
    cout<<a<<endl;

    //HERE IN THIS WE USE INT FLOAT DOUBLE ETC AT SAME TIME 

    Vector<float>v3(3);
    v3.arr[0] = 1.4;
    v3.arr[1] = 3.3;
    v3.arr[2] = 0.1;

    Vector<float>v4(3);
    v4.arr[0] = 0.1;
    v4.arr[1] = 1.90;
    v4.arr[2] = 4.1;
    float b = v3.dotproduct(v4);
    cout<<b<<endl;
    return 0;
}*/


//WE CAN DEFINE FUNCTION OF THE CLASS USING SCOPE RESOLUTION "::" IN TEMPLATE   

#include<iostream>
using namespace std;
template <class T>
class Daddy
{
    public:
        T data;
        Daddy (T a)
        {
            data = a;
        }
        void display();
};
template <class T>
void Daddy<T> :: display()
{
    cout<<"The value of data is : "<<data<<endl;
} 
int main()
{
    Daddy<int> D(4);
    D.display();
    return 0;
}