#include<iostream>
using namespace std;
//base class
class employee{
    
    
    public:
    int id;
    float salary;
    employee(int inpid){
        id=inpid;
        salary=34;
    }
    employee(){}
};
//derived class
/*  class {{derived-class-name}} : {{visibility mode}} {{base-class-name}} 
    class members/methods/etc...
    1. default visibility mode is private
    2. Public visibility mode: public members of the base class become public members of the derived class 
    3. Private visibility mode: public members of the base class become private members of the derived class 
    private members are never inherited
    */
   class programmer : employee{
       public:
       programmer(int inpid){
           id = inpid;
       }
       int lanuagecode=9;
       void getdata(){
           cout<<id<<endl;
       }
   };
int main(){
    employee ayush(1),vivek(2);
    cout<<ayush.salary<<endl;
    cout<<vivek.salary<<endl;
    programmer skillf(10);
    cout<<skillf.lanuagecode<<endl;
    skillf.getdata();
    return 0;
}