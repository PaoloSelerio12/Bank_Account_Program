#include "Account.h"
#include "AccFunctions.h"


int main() {

    cout << "+-----------------------------------------------------------+\n";
    cout << "|       Computer Science and Engineering                    |\n";
    cout << "|     CSCE 1040 - Computer Programming II                   |\n";
    cout << "|Paolojerome Selerio  ps0914  PaolojeromeSelerio@my.unt.edu |\n";
    cout << "+-----------------------------------------------------------+\n\n";

    char choice;
    list<Account> accounts;

        //do while loop that iterates while the charater choice is not 5
 do{
    //display options to user
    cout << "|******************MENU*****************|" << endl;;
    cout << "| 1. Open a New Account                 |" << endl;
    cout << "| 2. Deposit into Account               |" << endl;
    cout << "| 3. Withdraw from Account              |" << endl;
    cout << "| 4. List all Accounts                  |" << endl;
    cout << "| 5. Exit                               |" << endl;
    cout << "|***************************************|" << endl;
    cout << "----> ";
    cin >> choice; //allows user to enter choice

    //switch case function for the operations
    switch(choice) {
      
        case OPEN:
        openAccount(accounts);
        break; 

        case DEPOSIT:
        depositAcct(accounts);
        break;

        case WITHDRAW:
        withdrawAcct(accounts);
        break;

        case LIST:
        listAccounts(accounts);
        break;

        case EXIT:
        cout << "Thank you for your business! " << endl;
        break;

        default: //default message if the user enteres an invalid number
        cout << "Error, please enter a value from 1-5";
        break;

    }
} while(choice != '5');




    return 0;
}