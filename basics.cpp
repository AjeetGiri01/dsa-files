#include<iostream>
using namespace std;

int main() {
    // cout << "Hello World" << endl;
    // float r;
    // cout << "enter radius of the circle : ";
    // cin >> r;
    // float area = 3.1415*r*r;
    // int a = (int)area;
    // cout << "Area of the circle is : " << area << endl;
    // cout << "Area of the circle is : " << a << endl;

    int n, k;
    int sum=0;
    cout << "Enter any number : ";
    cin >> n;
    while(n>0) {
        k = n%10;
        sum = sum+k;
        n = n/10;
    }
    cout << "Sum of the digits are : " <<sum;
    return 0;
}