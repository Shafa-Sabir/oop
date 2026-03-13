#include<iostream>
using namespace std;
int main(){
    int array[8]={1,3,5,6,7,9,2,4};

    int *ptr = (int*)array;
    cout<<ptr<<endl;
    cout<<array<<endl;
    for(int i =1;i<8;i++){
          cout<< ptr+i<<endl;
          cout<<*(ptr+i)<<endl;
    }
    
    return 0;

}