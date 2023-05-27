#include<iostream>
using namespace std;
class Shopitem 
{
    int id;
    public:
        int price;
        void setdata(int a,int b)
        {
            id = a;
            price = b;
        }
        void getdata()
        {
            cout<<"The ID of the item is : "<<id<<endl;
            cout<<"The Price of the item is : "<<price<<endl;
        }
};
int main()
{
    int size;
    cout<<"How many Items : ";
    cin>>size;
    Shopitem *ptr = new Shopitem[size];
    Shopitem *ptemp = ptr;
    int p,q,i;
    for ( i = 0; i < size; i++)
    {
        cout<<"Enter the ID and Price of thge Item "<<i+1<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
    }
    for (i = 0; i < size; i++)
    {
        cout<<"Item Number : "<<i+1<<endl;
        (*ptemp).getdata();
        ptemp++;
    }
    return 0;
}


