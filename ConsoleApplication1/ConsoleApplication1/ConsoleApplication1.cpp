#include <iostream>
#include <cmath>
#include <string>
#include <regex>
using namespace std;
class Employe {

protected:
	int id;
	string name, password;
	double salary;
public:
	Employe() {
		this->id = 0;
		this->salary = 0;
	}
	//seterr
	void setName(string name) {
		if (!regex_match(name, regex("^[a-zA-Z]{3,20}$"))) {
			throw invalid_argument("Name must be 3-20 alphabetic chars!");
		}
		this->name = name;
	}

	void setPassword(string pass) {
		if (!regex_match(pass, regex("^//S{8,20}$"))) {
			throw invalid_argument("Password must be 8-20 chars without spaces!");
		}
	}

	void setSalary(double salary) {
		if (salary <= 5000)
			cout << "The salary is insufficient";
		else this->salary = salary;
	}
	//geterr
	int getid() { return id; }
	string getname() { return name; }
	string getpassword() { return password; }
	double getsalary() { return salary; }



	void display() {
		cout << "=========== Employe INFO ===========\n";
		cout << "name  =   " << name << endl;
		cout << "id  =   " << id << endl;
		cout << "password  =   " << password << endl;
		cout << "salary  =   " << salary << endl;
		cout << "====================================\n";
	}

};

int main()
{
	Employe a1;
	string n;
	cin >> n;
	a1.setName(n);
	a1.display();









}

