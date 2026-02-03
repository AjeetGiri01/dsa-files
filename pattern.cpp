#include <iostream>
using namespace std;

int main() {

    // int n = 5;
    // for(int i=1; i<=n; i++) {
    //     for(int j=1; j<=i; j++) {
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }

    // char ch = 'A';
    // int n;
    // cout << "enter a number ";
    // cin >> n;
    // for(int i=0; i<n; i++) {
    //     for(int j=0; j<n; j++) {
    //         cout << ch << " ";
    //         ch += 1;
    //     }
    //     cout << endl;
    // }

    // int n=4;
    // for(int i=0; i<=n-1; i++){
    //     for(int j=i+1; j>0; j--) {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // int n = 4;
    // for(int i=0; i<n; i++) {
    //     for(int j=0; j<i; j++) {
    //         cout << " " << " ";
    //     }
    //     for(int j=0; j<n-i; j++){
    //         cout << i+1 << " ";
    //     }
    //     cout << endl;
    // }

    // int n=4;
    // for(int i=0; i<n; i++) {
    //     for(int j=0; j<n-i-1; j++) {
    //         cout << " " << " ";
    //     }
    //     for(int j=1; j<=i+1; j++) {
    //         cout << j << " ";
    //     }
    //     for(int j=i; j>0; j--) {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    char ch = 'A';
    int n = 5;
    for(int i=1; i<=n; i++) {
        if(i%2 != 0) {
            for(int j=1; j<=i; j++) {
                cout << j <<" ";
            }
        } else {
            for(char ch='A'; ch<'A'+i; ch++) {
                cout << ch <<" ";
            }
        }
        cout << endl;
    }
    return 0;
}