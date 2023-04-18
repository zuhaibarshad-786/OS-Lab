#include<iostream>
using namespace std;
main()
{
   string password;
   cout<<"Enter password:"<<endl;
   cin>>password;
   if(password == "s3cr3t!P@ssw0rd") 
   {
    cout<<"Welcome";
   }
   else
   {
    cout<<"Wrong password";
   } 

}