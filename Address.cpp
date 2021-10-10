#include <bits/stdc++.h> //header file used to link with inbuilt function

using namespace std;

class Address{

    private:
        int door_No;
        char v_name[50];
        char distt[50];
        char state[50];
        int pincode;

    public:
        Address(){   //default constructor for Address class
            
        }

        void insert_Address(int account_Number){//Inserting the address of customer
            cout<<"\nDoor No: ";
            cin>>door_No;
            cout<<"\nVillage/ City: ";
            cin.ignore();
            cin.getline(v_name,20);
            cout<<"\nDistt: ";
            cin.ignore();
            cin.getline(distt,20);
            cout<<"\nState";
            cin.ignore();
            cin.getline(state,20);
            cout<<"\nPin code: ";
            cin>>pincode;

            fstream addInfo;//file pointer used to opration done on file
            addInfo.open("Address.txt",ios::app); //opening file in app mode
            //Inserting the address of customer into the file
            addInfo<<account_Number;
            addInfo<<"\t\t";
            addInfo<<door_No;
            addInfo<<"\t\t";
            addInfo<<v_name;
            addInfo<<"\t\t";
            addInfo<<distt;
            addInfo<<"\t\t";
            addInfo<<state;
            addInfo<<"\t\t";
            addInfo<<pincode;
            addInfo<<"\n";
            
            addInfo.close();
        }
};