//Implementation Account class

#include <iostream>
#include <string.h>
#include<cstring>
#include "Account.h"
using namespace std;

Account::Account(const char aID[], const char aStatus[] , const char pw[]){
 strcpy(accountID,aID) ;
 strcpy(accountStatus , aStatus ); 
 strcpy(password , pw) ;
}
void Account::DisplayAccountDetails()
{
  cout<<"Account ID :"<< accountID <<endl;
  cout<<"Account status :"<< accountStatus<<endl;
  cout<<"Password:"<<password<<endl;
}
void Account::EditAccountDetails()
{
  
}
Account::~Account(){
  
}

 