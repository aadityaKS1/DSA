#include <iostream>
#include <math.h>
using namespace std;

void checkPalindrome(int n)
{
    int original = n;
    int rev = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        n = n / 10;
        rev = (rev * 10) + lastDigit;
    }

    if (original == rev)
    {
        cout << "P+alindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
}
int main()
{
    checkPalindrome(1331);
    return 0;
}