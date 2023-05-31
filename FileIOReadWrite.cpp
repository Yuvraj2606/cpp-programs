// WRITING OPERATION IN FILE FROM ONE FILE TO ANOTHER 

/*#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string st = "Hello Myself Yuvraj Varshney .";
    ofstream out("Sample.txt"); //HERE out IS OBJECT OF CLASS OFSTREAM 
    out<<st;
}*/

// READING OPERATION IN FILE FROM ONE FILE TO ANOTHER 

/*#include<iostream>
#include<fstream>
using namespace std;
int main()
{
   string st;
   ifstream in("Sample1.txt");
   in>>st;
   getline(in,st);
   cout<<st; 
   return 0;
}*/


//USING CONSTRUCTOR
/*#include<iostream>
#include<fstream>
 
using namespace std;
 
int main(){
 
              // connecting our file with hout stream
               ofstream hout("sample60.txt");
   
               // creating a name string variable and filling it with string entered by the user
              string name;
               cout<<"Enter your name: ";
              cin>>name;
     
             // writing a string to the file
             hout<<name + " is my name";
 
            // disconnecting our file
            hout.close();
            // connecting our file with hin stream
           ifstream hin("sample60.txt");
 
          // creating a content string variable and filling it with string present there in the text file
           string content;
            hin>>content;
           cout<<"The content of the file is: "<<content;
 
           // disconnecting our file
           hin.close();
           return 0;
}*/

//Using the member function open() of the class

#include <iostream>
#include <fstream>
 
using namespace std;
 
int main()
{
 
    // declaring an object of the type ofstream
    ofstream out;
 
    //connecting the object out to the text file using the member function open()
    out.open("sample60.txt");
 
    //writing to the file
    out <<"This is me\n";
    out <<"This is also me";
    //closing the file connection
    out.close();
    return 0;
}
