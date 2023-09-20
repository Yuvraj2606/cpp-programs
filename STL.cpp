// ARRAY LIBRARIES IN STL C++


// #include<iostream>
// #include<array>
// using namespace std;
// int main()
// {
//     array<int,4> a ={1,2,3,4};
//     int size = a.size();
//     cout<<"The Array is : ";
//     for(int i=0;i<size;i++)
//     {   
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"Element at 2nd Index is : "<<a.at(2)<<endl;
//     cout<<"Array is Empty or Not if Empty print 1 else 0 : "<<a.empty()<<endl;
//     cout<<"First Element of an Array is : "<<a.front()<<endl;
//     cout<<"Last Element of an Array is : "<<a.back()<<endl;
//     return 0;
// }

/*VECTOR LIBRARIES
VECTOR : Vector is a type of array which is dynamic. In array if array is size of 4 and we have to add th element in it, it not possible but in Vector it is possible because vector make a new vector which is double in size as compare to exist vector and copy all element of exist vector in to new vector.*/

// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     cout<<"Capacity : "<<v.capacity()<<endl;

//     v.push_back(10);
//     cout<<"Capacity : "<<v.capacity()<<endl;

//     v.push_back(20);
//     cout<<"Capacity : "<<v.capacity()<<endl;

//     v.push_back(30);
//     cout<<"Capacity : "<<v.capacity()<<endl;

//     cout<<"Size of Vector v : "<<v.size()<<endl;
//     cout<<"Elements in Vector v : ";
//     //for(int i:v)
//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;

//     cout<<"Element at index 1 of vector v : "<<v.at(1)<<endl;
//     cout<<"The First element of a vector v : "<<v.front()<<endl;
//     cout<<"The Last element of vector v : "<<v.back()<<endl;
//     v.push_back(40);
//     cout<<"Elements in Vector v : ";
//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     v.pop_back();
//     cout<<"After pop_backElements in Vector v : ";
//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     cout<<"Before the clear the size of v is : "<<v.size()<<endl;
//     v.clear();
//     cout<<"After the clear the size of v is : "<<v.size()<<endl;

//     vector<int> a(5,1);  //a(5,1) Here 5 is size of a and by 1 it is initialize means all elements of a are 1
//     cout<<"The size of a is : "<<a.size()<<endl;
//     cout<<"The Elements of vector a : ";
//     for(int j=0;j<a.size();j++)
//     {
//         cout<<a[j]<<" ";
//     }
//     cout<<endl;
//     vector <int> last(a);
//     cout<<"The Elements of vector last : ";
//     for(int j=0;j<last.size();j++)
//     {
//         cout<<last[j]<<" ";
//     }
//     return 0;
// }




// DEQUE LIBRARIES

// #include<iostream>
// #include<deque>
// using namespace std;
// int main()
// {
//     // how to create deque
//     deque<int> d;
//     d.push_front(10);
//     d.push_back(20);
//     d.push_back(30);
//     cout<<"The Elements of deque d : ";
//     for(int j=0;j<d.size();j++)
//     {
//         cout<<d[j]<<" ";
//     }
//     cout<<endl;
//     cout<<"The size of d is : "<<d.size()<<endl;
//     cout<<"The First Element of d is "<<d.front()<<endl;
//     cout<<"The Last Element of d is : "<<d.back()<<endl;
//     cout<<"The Element at index 1 is : "<<d.at(1)<<endl;
//     d.pop_back();
//     d.pop_front();
//     cout<<"The Elements of deque d : ";
//     for(int j=0;j<d.size();j++)
//     {
//         cout<<d[j]<<" ";
//     }
//     cout<<endl;
//     d.push_front(10);
//     d.push_back(30);
//     cout<<"The deque d is Empty or not : "<<d.empty()<<endl;
//     cout<<"Before erase the size of d is : "<<d.size()<<endl;
//     d.erase(d.begin(),d.begin()+1);
//     cout<<"After Erase the size of d is : "<<d.size()<<endl;
//     cout<<"The Elements of deque d : ";
//     for(int j=0;j<d.size();j++)
//     {
//         cout<<d[j]<<" ";
//     }
//     return 0;
// }

//PRIORITY_QUEUE LIBRARIES

#include<iostream>
// #include<queue>
// using namespace std;
// int main()
// {
//     priority_queue<int> maxi;
//     maxi.push(1);
//     maxi.push(2);
//     maxi.push(3);
//     maxi.push(4);
//     cout<<"size of maxi : "<<maxi.size()<<endl;
//     int n = maxi.size();
//     for(int i=0;i<n;i++)
//     {
//         cout<<maxi.top()<<" ";
//         maxi.pop();
//     }
//     cout<<endl;
//     priority_queue<int,vector<int> , greater<int>> mini;
//     mini.push(1);
//     mini.push(2);
//     mini.push(3);
//     mini.push(4);
//     mini.push(5);
//     int m=mini.size();
//     for(int i=0;i<m;i++)
//     {
//         cout<<mini.top()<<" ";
//         mini.pop();
//     }
//     return 0;
// }

//SET LIBRARIES
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set <int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(0);
    s.insert(6);
    s.insert(6);
    s.insert(1);
    for(auto i:s)
    {
        cout<<i<<" ";
    }

}