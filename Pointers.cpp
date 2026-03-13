#include<iostream>
using namespace std;
class Student {
    public:
    int rollno;
    string name;
    string department;
    

};

int main(){
    Student* s1= new Student();
     s1->rollno=34;
    s1->name="Mubashir";
    s1->department="computer science";
cout<<s1->rollno<<s1->name<<s1->department<<endl;
delete (s1);
return 0;






    
    
}