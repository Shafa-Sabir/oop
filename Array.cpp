#include<iostream>
using namespace std;
class Student{
    public:
    int roll_no;
    string name;
    string Dep;
    Student(int roll_no,string name,string Dep){
        this->roll_no=roll_no;
        this->name=name;
        this->Dep=Dep;
    }
    // copy constructor
    Student(Student & s3){
        this->name=s3.name;
        this->roll_no=s3.roll_no;
        this->Dep=s3.Dep;
    }
    void display_information(){
        cout<<roll_no<<endl;
        cout<<name<<endl;
        cout<<Dep<<endl;

    }
    

};
int main(){
    Student s1(12,"Abdullah","Computer Science");
    s1.display_information();
    Student s2(s1);
    s2.display_information();
    s1.roll_no=25;
    s1.display_information();
    s2.display_information();


}