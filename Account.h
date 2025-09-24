#pragma once

#include <string> //for string
#include <iostream>
#include <iomanip> //for cin.ignore and setw 
using namespace std;
//class bank account with public and private members.
class Account {

    public:
    Account(); //default constructor
    Account(string accName, float deposit); //overload constructor
    ~Account(); //destructor

    //mutators
    void SetName(string accName);
    void deposit(float amt);
    bool withdraw(float amt);

    //accessors
    int GetNumber() const;
    string GetName() const;
    float GetBalance() const;

    //print function
    void printInfo() const;

    static int s_IdNum;

    private:
    /*private variable declarations*/
    int m_accountNumber; //account number
    string m_accountName; //name of the owner of the account
    float m_accountBalance; //balance of the account

};