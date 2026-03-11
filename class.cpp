#include<iostream>
using namespace std;

class Student{
    private:
    int roll_no;
    string name;
    string Dep;
    public:
    Student(int roll_no, string name,string Dep){
        this->roll_no=roll_no;
        this->name=name;
        this->Dep=Dep;


    }
    Student(Student &s3){
        this->roll_no=s3.roll_no;
        this->name=s3.name;
        this->Dep=s3.Dep;

    }
   void display_information(){
    cout<<roll_no<<name<<Dep<<endl;
   }

};
int main (){
    Student s1(13,"shafa","computer science");
    Student s2(s1);
    s1.display_information();
    s2.display_information();



}



