#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 0)
    {
        cout << "error";
        return 0;
    }

    long long int factorial = 1;// this is else case valid for n==0 0r n==1
    while (n > 1)
    {
        factorial = factorial * n;
        n--;
        if (n == 0 || n == 1)
        {
           break;
        }
    }
    cout<<factorial;
    return 0;
}