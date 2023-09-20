// FIND LENGTH OF THE STRING

// #include<iostream>
// using namespace std;
// int getLength(char ch[])
// {
//     int count=0;
//     for(int i=0;ch[i]!='\0';i++)
//     {
//         count++;
//     }
//     return count;
// }
// int main()
// {
//     char name[20];
//     cout<<"Enter your name : ";
//     cin>>name;
//     cout<<"Length of the String(name) is : "<<getLength(name)<<endl;
//     return 0;
// }

// REVERSE THE STRING

// #include<iostream>
// using namespace std;
// void reverse(char ch[],int n)
// {
//     int s=0;
//     int e=n-1;
//     while(s<e)
//     {
//         swap(ch[s],ch[e]);
//         s++;
//         e--;
//     }
// }
// int main()
// {
//     char ch[20] = "YUVRAJ";
//     cout<<"Your String is : "<<ch<<endl;
//     cout<<"Reverse String : ";
//     //int n = ch.size();
//     reverse(ch,6);
//     cout<<ch;
//     return 0;
// }

// CHECK GIVEN STRING IS PALINDROME OR NOT

// #include<iostream>
// using namespace std;
// char toLower(char ch)
// {
//     if(ch>='a' && ch<='z')
//     {
//         return ch;
//     }
//     else{
//         char temp = ch-'A'+'a';
//         return temp;
//     }
// }
// int check(char ch[],int n)
// {
//     int s=0;
//     int e=n-1;
//     while(s<=e)
//     {
//         if(toLower(ch[s]) != toLower(ch[e]))
//         {
//             return 0;
//         }
//         else{
//             s++;
//             e--;
//         }
//     }
//     return 1;
// }
// int getLength(char ch[])
// {
//     int count=0;
//     for(int i=0;ch[i]!='\0';i++)
//     {
//         count++;
//     }
//     return count;
// }
// int main()
// {
//     char ch[50];
//     cout<<"Enter your string : ";
//     cin>>ch;
//     int n=getLength(ch);
//     cout<<"Given string is Palindrome or not ? (if Yes return 1 else 0) : "<<check(ch,n);
//     return 0;
// }

// NOTE
//  UPPERCASE TO LOWERCASE AND LOWERCASE TO UPPERCASE

// #include <iostream>
// using namespace std;
// char toLower(char ch)
// {
//     if (ch >= 'a' && ch <= 'z')
//     {
//         return ch;
//     } 
//     else
//     {
//         char temp = ch - 'A' + 'a';
//         return temp;
//     }
// }
// char toUpper(char ch)
// {
//     if (ch >= 'A' && ch <= 'Z')
//     {
//         return ch;
//     }
//     else
//     {
//         char temp = ch - 'a' + 'A';
//         return temp;
//     }
// }
// int main()
// {
//     char b = 'b';
//     char B = 'B';
//     string n = "NAME";
//     cout << "Character is : " << toLower(b) << endl;
//     cout << "Character is : " << toLower(B) << endl;
//     cout << "Character is : " << toUpper(b) << endl;
//     cout << "Character is : " << toUpper(B) << endl;
//     for (int j = 0; j < n.length(); j++)
//     {
//         n[j] = toLower(n[j]);
//     }
//     cout<<"String is : "<<n;
//     return 0;
// }

// MAXIMUM OCCURING CHARATER

// #include<iostream>
// using namespace std;
// char getMaxOccCh(string s)
// {
//     int arr[26] = {0};
//     for(int i=0;i<s.length();i++)
//     {
//         char ch = s[i];
//         int number =0;
//         number = ch-'a';
//         arr[number]++;
//     }
//     int maxi= -1,ans=0;
//     for(int i=0;i<26;i++)
//     {
//         if(maxi<arr[i])
//         {
//             ans = i;
//             maxi = arr[i];
//         }
//     }
//     return 'a'+ans;
// }
// int main()
// {
//     string s;
//     cout<<"Enter your String : ";
//     cin>>s;
//     cout<<"Maximum charater Occur in your string is : "<<getMaxOccCh(s)<<endl;
//     return 0;
// }

// REPLACE SPACES

// #include<iostream>
// using namespace std;
// string replaceSpace(string s)
// {
//     string temp = "";
//     for(int i=0;i<s.length();i++)
//     {
//         if(s[i] == ' ')
//         {
//             temp.push_back('@');
//             temp.push_back('4');
//             temp.push_back('0');
//         }
//         else{
//             temp.push_back(s[i]);
//         }
//     }
//     return temp;
// }
// int main()
// {
//     char s[20];
//     cout<<"Enter your string : ";
//     cin.getline(s,20);
//     cout<<"After Replacing Space String is : "<<replaceSpace(s)<<endl;
//     return 0;
// }


//REMOVE ALL OCCURENCE OF THE SUBSTRING

#include <iostream>
#include<string>
using namespace std;
string removeOccurrences(string s, string part)
{

    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.length());
    }
    return s;
}
int main()
{
    char s[20];
    char p[20];
    cout<<"Enter your string : ";
    cin.getline(s,20);
    cout<<"Enter the Part you want to remove : ";
    cin.getline(p,20);
    cout<<"After Remove Substring from String then Output String is : "<<removeOccurrences(s,p)<<endl;
    return 0;
}