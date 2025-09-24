#include "Account.h"
//#include "Project3.h"

int Account::s_IdNum = 1000; //initializing static int variable to 1000

//sets to initial values
Account::Account() {

    m_accountNumber = s_IdNum++;
    m_accountName = "None";
    m_accountBalance = 0.0;  
}

//accessess the private variables
Account::Account(string accName, float deposit) {

    m_accountNumber = s_IdNum++;
    m_accountName = accName;
    m_accountBalance = deposit; 
}
//Destructor
Account::~Account() {
    cout << "Destructor called " << endl;
}

//setter functions and their declarations
void Account::SetName(string accName) {
    m_accountName = accName;
}
//deposit function with float amt as parameter.
void Account::deposit(float amt) {
    if(amt > 0) {
        m_accountBalance += amt; //add amt entered to balance. 
        cout << "Deposit successful. New balance:$ " << m_accountBalance;
    }
    else {
        cout << "invalid deposit amount. " << endl; //prints error if input is invalid
    }
}

//withdraw function with float amt as parameter
bool Account::withdraw(float amt){
    if(amt > m_accountBalance || amt <= 0) { //checks if input is valid or if funds are sufficient for withdrawal
        cout << "Error, you have insufficient funds or an improper input. " << endl;
    }
    return false;
    m_accountBalance -= amt; //subtracts amt from balance. 
    cout << "Withdrawal successful. New balance:$" << m_accountBalance << endl;
}


//Getter functions
int Account::GetNumber() const{
    return m_accountNumber;
}
string Account::GetName() const{
    return m_accountName;
}
float Account::GetBalance() const {
    return m_accountBalance;
}

//print code
void Account::printInfo() const {
    cout << "|" << setw(10) << m_accountNumber << "|" << setw(15) << m_accountName << "|$" << m_accountBalance << endl;
}   