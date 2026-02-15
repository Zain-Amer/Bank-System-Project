#include <iostream>
#include <string>
#include <regex>
#include "Employe.h"
using namespace std;

class Client:public Person {
protected:
	double bala;
public:
	Client() {
		this->id = 0;
		this->bala = 0;
	}

	Client(int id, string name, string pass, double bala) : Person(id, name, password) {
		this->id = id;
		this->name = name;
		this->password = password;
		this->bala = bala;
	}

	//Setters
	void setName(string name) {
		if (!regex_match(name, regex("^[a-zA-Z]{3,20}$"))) {
			throw invalid_argument("Name must be 3-20 alphabetic chars!");
		}
	}

	void setPassword(string password) {
		if (!regex_match(password, regex("^//S{8,20}$"))) {
			throw invalid_argument("Password must be 8-20 chars without spaces!");
		}
	}

	void setBalance(double bala) {
		if (bala < 1500) {
			throw invalid_argument("Minimum balance is 1500!");
		}
	}

	//Getters
	int getId(){ return id; }
	
	string getName() { return name; }
	
	string getPassword() { return password; }

	double getBalance() { return bala; }

	void deposit(double amount) {
		if (amount <= 0) {
			throw invalid_argument("Deposit amount must be positive !");
		}
		bala += amount;
		cout << "Deposit :" << amount << endl;
		cout << "New Balance :" << bala << endl;
	}


	void withdraw(double amount) {
		if (amount <= 0) {
			throw invalid_argument("Withdraw amount must be positive !");
		}
		if (bala - amount < 1500) {
			throw invalid_argument("Cannot withdraw! Minimum balance 1500 required!");
		}
		bala -= amount;
		cout << "Wihtdrawn :" << amount << endl;
		cout << "New Balance :" << bala << endl;
	}

	void trasferTo(double amount, Client& recipient) {
		if (amount <= 0) {
			throw invalid_argument("Transfer amount must be positive !");
		}
		if (bala - amount < 1500) {
			throw invalid_argument("Cannot Transfer ! Minimum balance 1500 required!");
		}
		bala -= amount;
		recipient.bala += amount;
		cout << "Transferd :" << amount << endl;
		cout << "Balance :" << bala << endl;
	}

	void checkBalance() {
		cout << "Your Balance :" << bala << endl;
	}

	void input() {
		cout << "Enter ID: "; cin >> id;
		cout << "Enter Name: "; cin >> name;
		cout << "Enter Password: "; cin >> password;
		cout << "Enter Balance: "; cin >> bala;
	}

	void display() {
		cout << "\n============ CLIENT INFO =============\n";
		cout << "ID              :" << id << endl;
		cout << "Name            :" << name << endl;
		cout << "Current Balance :" << bala << endl;
		cout << "\n========================================";
}




};
int main() {
	



}

