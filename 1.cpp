#include <iostream>
using namespace std;

class account{
   
   public:
   int balance;
   account(int cost){
    if(cost>0){
      balance=cost;
      }
      else{
       cout<<"give correct balance\n";
      }
   }
   void credit(int amount){
      balance+=amount;
   }
  void debit(int amount){
    if(amount<=balance){
      balance-=amount;
      }
    
    else{
      cout<<"amount insufficient\n";
    }  
  }
  int v_balance(){
     return balance;
  }
};

