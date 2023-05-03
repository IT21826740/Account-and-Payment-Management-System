//Create payment class

#include <string.h>
#include <iostream>
using namespace std;

class Payment{
private:
    char paymentID [20];
    char paymentMethod[20];
    double amount;
    string pDate;
//Relationship
    Fine*fine1[SIZE];

public:
  Payment(){};
  Payment(const char PID[],const char pMethod,double Pamount,string date);
 
  void displayPaymentDetails();
  void checkPaymentHistory();
  ~Payment();
};