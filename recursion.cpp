#include <iostream>
#include <vector>
using namespace std;

//n to 1..
void printNums(int n) {
    if(n == 0) return;
    cout << n <<" ";
    printNums(n-1);
}

//1 to n....
void printNums2(int n) {
    if(n == 0) return;
    printNums2(n-1);
    cout << n <<" ";
}

//n factorial..
int fact(int n) {
    if(n == 0) {
        return 1;
    }
    return n * fact(n-1);
}

//sum of n numbers..
int sum(int n) {
    if(n == 1) return 1;
    return n + sum(n - 1);
}

//check if array is sorted or not 
bool isSorted(vector<int> arr, int n){
    if(n==0 || n==1) return true;
    return arr[n-1] >= arr[n-2] && isSorted(arr, n-1);
}

int main() {
    printNums(5);

    printNums2(5);
    
    int f = fact(5);
    cout << f << endl;
    
    cout << sum(5) << endl;

    vector<int> arr = {2, 4, 5, 12, 34};
    cout << isSorted(arr, 5) << endl;
    return 0;
}