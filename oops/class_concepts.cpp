//
// Created by sriyansh on 1/18/26.
//


#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    double salary;
public:
    string name;
    string subject;
    string course;

    Teacher(string name, string subject, string course, double salary) {
        this->name = name;
        this->subject = subject;
        this->course = course;
        this->salary = salary;
    };

    void setSalary(double newSalary) {
        this->salary = newSalary;
    }

    double getSalary() {
        return salary;
    }


};

int main() {
    Teacher t1("satish","Computer Science","c++",25000);
    cout << t1.getSalary() << endl;
    cout << t1.name << endl;
    return 0;

}