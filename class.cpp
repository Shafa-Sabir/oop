#include<iostream>
using namespace std;

class Account{
    private:

    int Account_no;
    public:
    string user_name;
    string Account_type;

    public:
    Account (){
        
    }
    Account(string user_name,string Account_type){
        this->user_name=user_name;
        this->Account_type=Account_type;

    }
    void get_Account_no( int Account_no){
       this-> Account_no=Account_no;


    }
    int set_Account(){
        return  Account_no;

    }
    void create_Account(){
        cout<<"Hello, Account is created."<<endl;

    }
    void display_information(){
        cout<<

    }
    void withdraw(){
    
    }
    void deposit(){

    }
    ~Account(){
        cout<<"Account object is destroyed"<<endl;
    }
     

};




int main (){
    do{
    cout<<"*********************************"<<endl;
    cout<<"What function you want to perform"<<endl;

    
        cout<<"1. Create Account"<<endl;
        cout<<"2.  Display information"<<endl;
        cout<<"3.   WithDraw"<<endl;
        cout<<"4.  Deposit"<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"********"<<endl;
        int a;
        cout<<"Enter your choice:";
        cin>>a;
        switch(a){
            case1:
            Account A1;
            A1.create_Account();
            break;
            case2:
             Account A1("shafa","saving account");
             break;
             case3:
             








        }while(a=!5);
    

     

    }


    
    
      

    

    



}



