#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    double salary; //data hiding

public:
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
};

int main() {
    Teacher t1;
    t1.name = "Ajeet";
    t1.subject = "C++";
    t1.dept = "Computer Science";
    t1.setSalary(250000);
    
    cout<< t1.name <<endl;
    cout<< t1.getSalary() <<endl;
    return 0;
}