#include "Account.h" //include the header files.
#include "AccFunctions.h"

//open account function with linked list instead of vector
void openAccount(list<Account>& accounts){
    string name;
    float initialDeposit;
    cout << "Enter account name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter the initial deposit amount: ";
    cin >> initialDeposit;

    Account newAccount(name, initialDeposit);
    accounts.push_back(newAccount);

    cout << "Account opened: " << newAccount.GetNumber() << "---" << newAccount.GetName() << "---" << newAccount.GetBalance() << endl;
}

//deposit account function with linked list instead of vector. 
void depositAcct(list<Account>& accounts) {
    int accountNum;
    float depAmt;
    bool found = false;

    cout << "Enter account number: ";
    cin >> accountNum;
    for(auto& acc : accounts) {
        if(acc.GetNumber() == accountNum) {
            cout << "Enter deposit amount: ";
            cin >> depAmt;
            acc.deposit(depAmt);
            found = true;
            break;
        }
    }
    if(!found) {
        cout << "Account number" << accountNum << " not found." << endl;
    }
}

//withdraw account function with linked list instead of vector
void withdrawAcct(list<Account>& accounts) {
    int accountNum;
    float witAmt;
    bool found = false;

    cout << "Enter account number: ";
    cin >> accountNum;

    for(auto& acc : accounts) {
        if(acc.GetNumber() == accountNum) {
            cout << "Enter withdrawal amount:$";
            cin >> witAmt;
            acc.withdraw(witAmt);
            found = true;
            break;
        }
    }
    if(!found) {
        cout << "Account number" << accountNum << " not found." << endl;
    }
    
}

//list account function with linked list instead of vectors. 
void listAccounts(const list<Account>& accounts) {
    if(accounts.empty()) {
        cout << "No accounts available." << endl;
        return;
    }

    cout << "+-----------------------------------------------+" << endl;
    cout << "| Acct Number | Name | Balance |" << endl;
    cout << "+-----------------------------------------------+" << endl;

    for(const auto& acc : accounts) {
        acc.printInfo();
    }
    cout <<  "+-----------------------------------------------+" << endl;
}