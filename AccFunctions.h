#pragma once
#include "Account.h"
#include <list> //for linked lists instead of vector.

//global enum for user interface menu
enum accountChoice{OPEN = '1', DEPOSIT = '2', WITHDRAW = '3', LIST = '4', EXIT = '5'};
//account functions that use list to organize accounts.
void openAccount(list<Account>& accounts);
void depositAcct(list<Account>& accounts);
void withdrawAcct(list<Account>& accounts);
void listAccounts(const list<Account>& accounts);



