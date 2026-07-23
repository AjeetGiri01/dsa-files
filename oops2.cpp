#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;

    // Person(string name, int age) {
    //     this->name = name;
    //     this->age = age;
    // }

    Person() {

    }
};

class Student : public Person {
public: 
    int rollno;

    void getInfo() {
        cout << name <<endl;
        cout << age <<endl;
        cout << rollno <<endl;
    }
};

int main() {
    Student s1;
    s1.name = "Ajeet Giri";
    s1.age = 20;
    s1.rollno = 025;

    s1.getInfo();
    
    return 0;
}