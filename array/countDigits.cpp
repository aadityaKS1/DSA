#include<iostream>
#include<math.h>
using namespace std;

int countDigit(int n) {
    // int count = 0;
    // while (n > 0) {
    //     //int lstDigit = n % 10;
    //     count = count + 1;
    //     n = n / 10;
    // }
    // return count;
    int count=int(log10(n)+1);
    return count;
}
int main(){
    int digit=countDigit(454445);
    cout<<"The number digits is : "<<digit<<endl;
    return 0;
}