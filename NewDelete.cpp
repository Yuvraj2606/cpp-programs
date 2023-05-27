/*#include<iostream>
using namespace std;
int main()
{
    //BASIC EXAMPLE OF POINTERS 

    int a=4;
    int *ptr = &a;
    int *p = new int(40); // Here we can use any data type int float and etc 
    cout<<"The value of a is : "<<a<<endl;
    cout<<"The value at address ptr is : "<<*ptr<<endl;
    cout<<"The value of ptr is : "<<ptr<<endl;
    cout<<"The address of a is : "<<&a<<endl;
    cout<<"The value at address p is : "<<*(p)<<endl;
    return 0;
}*/



// EXAMPLE OF NEW KEYWORD/OPERATOR


/*#include<iostream>
using namespace std;
int main()
{
    int *p = new int(40);
    cout<<"The value at address p is : "<<*p<<endl;
    return 0;
}*/




#include<iostream>
using namespace std;
int main()
{
    int *arr = new int[3];
    /*arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;*/
    cout<<"The value of arr[0] is : " << arr[0] << endl;
    cout<<"The value of arr[1] is : " << arr[1] << endl;
    cout<<"The value of arr[2] is : " << arr[2] << endl;
    return 0; 
}


/*#include<iostream>
using namespace std;

int main(){
  
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    delete[] arr;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
   
    return 0;
}*/
