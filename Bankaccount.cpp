#include<iostream>
using namespace std;
class Bank_account
{
   private:
   float Account_no;
   string Account_Holder;
   float balance;
   string Account_type;
   public:
   void add_Account(int no){
     cout<<"ENTER ACCOUNT NUMBER"<<no<<endl;
     cin>>Account_no;
     cout<<"ENTER ACCOUNT HOLDER NAME"<<no<<endl;
     cin>>Account_Holder;
     cout<<"ENTER THE BALANCE IN THE ACCOUNT"<<no<<endl;
     cin>>balance;
     cout<<"ENTER THE TYPE SAVING OR CURRENT OF ACCOUNT "<<no<<endl;
     cin>>Account_type;
   }
   void display_accountdetails(){
     cout<<"THE ACCOUNT NUMBER IS:"<<Account_no<<endl;
     cout<<"ACCOUNT HOLDER NAME IS:" <<Account_Holder<<endl;
     cout<<"BALANCE PRESENT IN THE ACCOUNT IS"<<balance<<endl;
     cout<<"THE ACCOUNT TYPE IS: "<<Account_type<<endl;
   }
   void compare(Bank_account *p){
     if(this->balance > p->balance){
       cout<<"ACCOUNT WITH HIGHER BALANCE:"<<endl;
       cout<<"ACCOUNT NUMBER:"<<this->Account_no<<endl;
       cout<<"ACCOUNT HOLDER NAME:"<<this->Account_Holder<<endl;
       cout<<"BALANCE:"<<this->balance<<endl;
     }
     else{
       cout<<"ACCOUNT WITH HIGHER BALANCE:"<<endl;
       cout<<"ACCOUNT NUMBER:"<<p->Account_no<<endl;
       cout<<"ACCOUNT HOLDER NAME:"<<p->Account_Holder<<endl;
       cout<<"BALANCE:"<<p->balance<<endl;
     }
   }
};
int main(){
   int i,n,j;
   cout<<"ENTER NUMBER OF BANK ACCOUNTS:"<<endl;
   cin>>n;
   Bank_account m[n];
   Bank_account m1;
   for(i=0;i<n;i++){
     m[i].add_Account(i+1);
   }
   cout<<"================ACCOUNT DETAILS================"<<endl;
   for(j=0;j<n;j++){
     m[j].display_accountdetails();
   }
   cout<<"================HIGHER BALNCE ACCOUNTS================"<<endl;
   m[0].compare(&m[1]);
   return 0;
}
