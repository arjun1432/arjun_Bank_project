#include "Customer.cpp"

class User : public Customer{

};

int main(){
     int ch,n;
     User uobj;
     do{
         cout<<"1. Add new customer\n2.Deposite\n3.Withdraw\n4. Display Account number and Balance "<<endl;
         cin>>ch;
         switch(ch){
             case 1:
             uobj.create_account();
             break;
             case 2:
             uobj.deposit();
             break;
             case 3:
             uobj.withdraw();
             break;
             case 4:
             uobj.display();
             break;
             default:
             cout<<"Worng choice!!!!!";
         }
         cout<<"Enter 1 for more operation and 0for Exit ";
         cin>>n;
     }while(n);
     return 0;
     
 }