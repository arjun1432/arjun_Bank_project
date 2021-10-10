#include "Address.cpp"
 
class Customer : public Address{
    private://private data member not acccesible outside the class directly
        int account_number;
        char name[50];
        char account_type[7];
        float balance;
    public:
    //default constructer
        Customer(){
           
        }

       void create_account();
       void deposit() ;
       void withdraw();
       void display();
};

void Customer::create_account(){//creating new account for new Customer
    cout<<"Enter Accout No.\n ";
    cin>>account_number;
    cout<<"Enter Name of user :\n";
    cin.ignore();
    cin.getline(name,50);
    cout<<"Enter Account Type :\n";
    cin>>account_type;
    cout<<"Enter the Balance:\n ";
    cout<<"ALERT PLz Enter balance Zero or More then Zero\n";
    cin>>balance;
    if(balance<0){
        balance=0;
    }

    fstream custInfo;//file pointer used to opration done on file
    custInfo.open("Customer.txt",ios::app); //opening file in app mode
    //Inserting the customer of customer into the file
    custInfo<<account_number;
    custInfo<<"\t\t";
    custInfo<<name;
    custInfo<<"\t\t";
    custInfo<<account_type;
    custInfo<<"\t\t";
    custInfo<<balance;
    custInfo<<"\n";
    custInfo.close();
    Address a;
    a.insert_Address(account_number);
    cout<<"\t\t\tAccount Created Successfully\n";
    }

void Customer::deposit(){
    int amount;
    cout<<"\n Enter the amount to Deposit:\n ";
    cin>>amount;
    balance+=amount;
    cout<<"\t\t\tDeposite Updated\n";
}

void Customer :: withdraw(){
    int withdraw;
    cout<<"\n Enter the amount u want to  Withdraw:\n";
    cin>>withdraw;
    if(withdraw>balance)
        cout<<"Not Sufficient Amount:\n";
    else
        balance-=withdraw;

    cout<<"\t\t\tAmount Withdrawl Successfully\n";
}

void Customer :: display(){
    fstream balInfo;
    balInfo.open("Customer.txt",ios::in);
   // char infor[100];
    while(balInfo)
    {
        balInfo>>account_number>>balance;
        cout<<endl<<account_number<<"    "<<balance<<endl;
    }
    balInfo.close();
}

 