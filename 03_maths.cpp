#include <iostream>
using namespace std;
// bool isArmstrong(int n) {
//     int copyN = n;
//     int sumOfCubes = 0;
//     while(n != 0) {
//         int dig = n % 10;
//         sumOfCubes += (dig * dig * dig);
//         n = n/10;
//     }
//     return sumOfCubes == copyN;
// } 

int gcd(int a, int b) {
    while(a>0 && b>0) {
        if(a > b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }
    if(a==0) return b;
    return a;
}

int main() {
    // int n = 153;
    // if(isArmstrong(n)) {
    //     cout << "an armstrong number\n";
    // }else {
    //     cout << "not an armstrong number\n";
    // }

    // int a, b;
    // int gcd=1;
    // cout << "Enter first number: ";
    // cin >>a;
    // cout << " Enter second number: ";
    // cin >>b;
    // for(int i=1; i<=min(a, b); i++) {
    //     if(a%i==0 && b%i==0) {
    //         gcd = i;
    //     }
    // }
    // cout << "GCD of "<<a <<" and "<<b <<" is: "<<gcd;


    cout << gcd(20, 28) << endl;
    return 0;
}