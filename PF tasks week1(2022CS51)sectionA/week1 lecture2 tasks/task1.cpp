#include<iostream>
using namespace std;
void checkNumbers(int number);
main()
{
    int number;
    cout<<"Enter any number in the range of (0 to 9):"<<endl;
    cin>>number;
    checkNumbers(number);
}
   void checkNumbers(int number)
   {    
    if(number == 0)
    {
        cout<<"Zero"<<endl;
    }
        
    else if(number == 1)
    {
        cout<<"One"<<endl;;
    }
    else if(number == 2)
    {
        cout<<"Two"<<endl;
    }
    else if(number == 3)
    {
        cout<<"Three"<<endl;
    }
    else if(number == 4)
    {
        cout<<"Four"<<endl;
    }
    else if(number == 5)
    {
        cout<<"Five"<<endl;
    }
    else if(number == 6)
    {
        cout<<"Six"<<endl;
    }
    else if(number == 7)
    {
        cout<<"Seven"<<endl;
    }
    else if(number == 8)
    {
        cout<<"Eight"<<endl;
    }
    else if(number == 9)
    {
        cout<<"Nine"<<endl;
    }
    
    else 
    {
        cout<<"number is too big"; 
    }
   }