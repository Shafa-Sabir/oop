#include<iostream>
using namespace std;


int main(){
    int org_var=3;
    int &alias_name=org_var;
    cout<<alias_name<<endl;
    cout<<"The value of variable"<<org_var<<endl;
    cout<<&alias_name<<endl;
    cout<<&org_var<<endl;
    alias_name=6;
    cout<<org_var<<endl;
    return 0;


}