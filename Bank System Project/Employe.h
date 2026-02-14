#include <iostream>
#include <cmath>
#include <string>
#include <regex>
#include "Person.h"
using namespace std;
class Employe:public Person {

protected:
	double salary;
public:
	Employe() : Person() {
		this->salary = 0;
	}
	//seterr
	void setSalary(double salary) {
		if (salary < 5000)
			cout << "The salary is insufficient\n";
		else this->salary = salary;
	}
	//geterr
	double getsalary() { return salary; }
	
	// Display 
	void display() {
		cout << "=========== Employe INFO ===========\n";
		cout << "name  =   " << name << endl;
		cout << "id  =   " << id << endl;
		cout << "password  =   " << password << endl;
		cout << "salary  =   " << salary << endl;
		cout << "====================================\n";
	}

};
