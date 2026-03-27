#include<iostream>
#include<vector>
using namespace std;
class BankAccount{
    private:
    int AccountNumber;
    double balance;
    string ownerName;
    vector <string> transactionHistory;
    public:
    void setvalues(){
        transactionHistory.resize(5);
        cout<<transactionHistory.size()<<endl;
        for(int i =0;i<5;i++)
        {
            cout<<"Enter your name";
            cin>>ownerName;
            transactionHistory.push_back(ownerName);
        }
    }
    void getvalues(){
        for(int i = 0;i<transactionHistory.size();i++){
            cout<<transactionHistory.at(i)<<endl;
                }
    }
    
    
    public:
    BankAccount(){

       
    }
};
int main(){
    BankAccount A1;
    A1.setvalues();
    A1.getvalues();



}