#include <iostream>
#include <string>

using namespace std;

class employee{
  private:
    string firstname;
    string lastname;
    int salary;
  public:  
    employee(){
      cout<<"Enter the firstname\n";
      cin>>firstname;
      cout<<"Enter the lastname\n";
      cin>>lastname;
      cout<<"enter the salary\n";
      cin>>salary;
   }
   
   string get_fname(){
      return firstname;
   } 
   
   void set_fname(string s){
      firstname=s;
   }
   
   string get_lname(){
      return lastname;
   } 
   
   void set_lname(string s){
      lastname=s;
   }
   
   int get_salary(){
      return salary;
   } 
   
   void set_salary(int s){
      salary=s;
   }
  
  void inc_salary(){
    salary=salary+(0.1*salary);
  }

};

int main(){
    employee obj;//constructor will initialize
    int pc=1;
    while(pc==1){
    cout<<"1-Get firstname\n";
    cout<<"2-Set firstname\n";
    cout<<"3-Get lastname\n";
    cout<<"4-Set lastname\n";
    cout<<"5-Get Salary\n";
    cout<<"6-set salary\n";
    cout<<"7-incrementing salary by 10%\n";
    
    int ch;
    cout<<"enter the choice from above\n";
    cin>>ch;
    if(ch==1){
      string s=obj.get_fname();
      cout<<s;
      cout<<"\n"; 
    }
    
    if(ch==2){
     string c;
     cout<<"enter the new firstname";
     cin>>c;
     obj.set_fname(c);
    }
    
    if(ch==3){
      string s=obj.get_lname();
      cout<<s;
      cout<<"\n"; 
    }
    
    if(ch==4){
     string c;
     cout<<"enter the new lastname";
     cin>>c;
     obj.set_lname(c);
    }
    
    if(ch==5){
      int s=obj.get_salary();
      cout<<s;
      cout<<"\n"; 
    }
    
    if(ch==6){
     int c;
     cout<<"enter the new salary";
     cin>>c;
     obj.set_salary(c);
    }
    
    if(ch==7){
       obj.inc_salary();
       cout<<"the salary is updated\n";
    }
    cout<<"do you want to continue(1/0)\n";
    cin>>pc;
    }
    
   return 0; 
}
