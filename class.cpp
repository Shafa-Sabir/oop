#include<iostream>
using namespace std;

class Student{
    private:
    int roll_no;
    string name;
    string Dep;
    public:
    Student getname(string name){
        this->name=name;
        return *this;
       

    }
    Student getrollno(int roll_no){
        this->roll_no=roll_no;
        return *this;
    }
    Student setDep(string Dep){
        this->Dep=Dep;
        return *this;
    }

   
    
   void display_information(){
    cout<<roll_no<<name<<Dep<<endl;
   }

};
int main (){
    Student S1;
    S1.getname("shafa").getrollno(34).setDep("computer science").display_information();

    
      

    

    



}



