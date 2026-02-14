#pragma once
#include <iostream>
#include <string>
#include <regex>
using namespace std;

class Person {

protected:
    int id;
    string name;
    string password;

public:

    // Constructors
    Person() {
        id = 0;
    }

    Person(int id, string name, string password) {
      this->id= id;
      this->name= name;
      this->password= password;
        
    }

    // Setters
    void setId(int id) {
        this->id = id;
    }

    void setName(string name) {
        if (!regex_match(name, regex("^[a-zA-Z]{5,20}$"))) {
            throw invalid_argument("Name must be 5-20 alphabetic characters!");
        }
        this->name = name;
    }

    void setPassword(string password) {
        if (!regex_match(password, regex("^\\S{8,20}$"))) {
            throw invalid_argument("Password must be 8-20 chars without spaces!");
        }
        this->password = password;
    }

    // Getters
    int getId(){
        return id;
    }

    string getName(){
        return name;
    }

    string getPassword(){
        return password;
    }

    // Display
    virtual void display(){
        cout << "=========== Person Info ===========\n";
        cout << "Name     : " << name << endl;
        cout << "ID       : " << id << endl;
        cout << "Password : " << password << endl;
        cout << "===================================\n";
    }

};
