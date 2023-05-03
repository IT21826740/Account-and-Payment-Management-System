//Implementation Payment class

#include <iostream>
#include <string.h>
#include<cstring>
#include "payment.h"
using namespace std;

 Payment::Payment(const char PID[],const char pMethod[],double Pamount, string date){
 strcpy(paymentID, PID);
 strcpy(paymentMethod,pMethod); 
 amount = Pamount ;
 pDate =date ;   
}

void Payment:: displayPaymentDetails()
{
    cout<<"Payment ID :"<< paymentID <<endl;
    cout<<"Payment method :"<< paymentMethod<<endl;
    cout<<"Amount:"<<amount<<endl;
    cout<<"Date:"<<pDate<<endl;
}
  void Payment::checkPaymentHistory()
{
  
}

Payment::~Payment()
{
  
}
