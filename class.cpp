#include<iostream>
using namespace std;
class Student{
    public:
    Student(int a,string Std_name,int Std_roll_no)
    {
       age=a;
       name=Std_name;
       roll_no=Std_roll_no;


    }
    private:
    int age;
    string name;
    int roll_no;
    public:
    void displays(){
        cout<<age<<endl;
        cout<<name<<endl;
        cout<<roll_no<<endl;

    }
    


};
int main(){
    Student S1(45,"Shafa",2347765);
   S1. displays();
    
}


