#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    double salary; //data hiding

public:
    //non-parameterized constructor
    // Teacher() { 
    //     dept = "Computer Science";
    // }

    //parameterized constructor
    Teacher(string name, string d, string s, double sal) {
        this->name = name;
        dept = d;
        subject = s;
        salary = sal;
    }

    //properties
    string name;
    string dept;
    string subject;

    //methods or member functions
    void changeDept(string newDept) {
        dept = newDept;
    }
    //setter function
    void setSalary(double s) {
        salary = s;
    }
    //getter function
    double getSalary() {
        return salary;
    }

    void getInfo() {
        cout<< "name : " << name <<endl;
        cout<< "subject : " << subject <<endl;
    }
};

int main() {
    Teacher t1("Ajeet", "Computer Science", "C++", 250000); //constructor call
    t1.getInfo();

    Teacher t2(t1); //copy constructor
    t2.getInfo();

    // t1.name = "Ajeet";
    // t1.subject = "C++";
    // t1.setSalary(250000);
    
    // cout<< t1.name <<endl;
    // cout<< t1.getSalary() <<endl;
    // cout<< t1.dept <<endl;


    return 0;
}