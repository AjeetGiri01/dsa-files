#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main() {
    // char str[] = {'a', 'b', 'c', '\0'}; 
    // char str[] = "string";
    // char str[100];

    // cout << "Enter char array : ";
    // cin >> str;
    // cin.getline(str, 100);

    // for(char ch : str) {
    //     cout << ch << " ";
    // }
    // cout << endl;

    // cout << strlen(str) << endl;


    // string str1 = "Ajeet ";
    // string str2 = "Giri"; 
    // string str3 = str1 + str2;
    // cout << str3 << endl;

    // cout << str << endl;
    // str = "Hello";
    // cout << str << endl;


    string str="ajeet giri";
    for(int i=0; i<str.length(); i++) {
        cout << str[i] << endl;
    }
    reverse(str.begin(), str.end());
    cout << str << endl;
    

    return 0;
}