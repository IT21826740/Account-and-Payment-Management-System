#include <iostream>
#include <string.h>
using namespace std;

class Account {
protected:
  char accountID[20];
  char accountStatus[20];
  char password[16];

public:
  Account(){};
  Account(const char aID[], const char aStatus[] , const char pw[]);
  void DisplayAccountDetails();
  void EditAccountDetails();
  ~Account();
}