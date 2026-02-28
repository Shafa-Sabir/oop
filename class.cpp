#include<iostream>
#include<string>
using namespace std;
class Resturant {
    public:
    string menu[2];
    int numberOfWaiters;
    string chairs;
    string tables;
    string kitchen;
    void setpayment(int payment){
        payments = payment;

    }
    void getpayment(int payment){
        cout<<payment<<endl;

    }
    private:
    string payments;
    


};
int main(){
    Resturant R1;
    R1.menu[0]="biryani";
    R1.menu[1]="daal chawal";
    int getpayment;
    cout<<"Enter your payment";
    cin>>getpayment;
 



}
