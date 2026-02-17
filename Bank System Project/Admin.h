#pragma once
#include <iostream>
#include <string>
#include "Person.h"
#include "regex"

using namespace std;

class Admin : public Person {
private:
    double salary;

public:

    // ===== Constructors =====
    Admin() : Person() {
       this->salary  = 0;
    }

    Admin(int id, string name, string password, double salary)
        : Person(id, name, password) {
        setSalary(salary);
    }

    // ===== Setter =====
    void setSalary(double salary) {
        if (salary >= 5000)
            this->salary = salary;
        else
            cout << "Minimum Salary is 5000!\n";
    }

    // ===== Getter =====
    double getSalary()  {
        return salary;
    }

    // ===== Display =====
    void display()  {
        cout << "===== Admin Info =====\n";
        cout << "ID: " << getId() << endl;
        cout << "Name: " << getName() << endl;
        cout << "Salary: " << salary << endl;
    }
};
