#include<iostream>
#include<math.h>
using namespace std;
int main() {
    long decimal;
     int n;
    cout <<"Enter a decimal number\n";
    cin >> decimal;
    int remainder; 
    long binary = 0, i = 1;
   
    while(n != 0) {
        remainder = n%2;
        n = n/2;
        binary= binary + (remainder*i);
        i = i*10;
    }
    cout << "Binary number = " << binary;
      
    return 0;
}