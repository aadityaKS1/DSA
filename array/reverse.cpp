#include <iostream>
#include <math.h>
using namespace std;

int reverseDigit(int n)
{
    int rev = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        n = n / 10;
        rev = (rev * 10) + lastDigit;
     
    }
     return rev;

}
 
int main()
{   
    cout<<"The given number is : 3245 "<<endl;
    int revDigit=reverseDigit(3245);
    cout<<"The reversed Digit is : "<<revDigit<<endl;
   
    return 0;
}