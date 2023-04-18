#include<iostream>
using namespace std;
main()
{
    int number;
    cout << "Enter any number in the range from (0 to 100):";
    cin >> number; 
   
    int n1;
    int n2;
    n1 = number / 10;
    n2 = number % 10;
    
    if(n1 == 2)
    {
        cout<<"twenty"<<" ";
    }
    if(n1 == 3)
    {
        cout<<"thirty"<<" ";
    }
    
      if(n1 == 4)
    {
        cout<<"fourty"<<" ";
    }
      if(n1 == 5)
    {
        cout<<"fifty"<<" ";
    }
      if(n1 == 6)
    {
        cout<<"sixty"<<" ";
    }
      if(n1 == 7)
    {
        cout<<"seventy"<<" ";
    }
      if(n1 == 8)
    {
        cout<<"eighty"<<" ";
    }
      if(n1 == 9)
    {
        cout<<"ninety"<<" ";
    }
    if(n2 == 1)
    {
        cout<<"one";
    }
    if(n2 == 2)
    {
        cout<<"two";
    }
    if(n2 == 3)
    {
        cout<<"three";
    }
     if(n2 == 4)
    {
        cout<<"four";
    }
     if(n2 == 5)
    {
        cout<<"five";
    }
     if(n2 == 6)
    {
        cout<<"six";
    }
     if(n2 == 7)
    {
        cout<<"seven";
    }
     if(n2 == 8)
    {
        cout<<"eight";
    }
     if(n2 == 9)
    {
        cout<<"nine";
    }
//    cout<<" "<<endl;

    if(number == 10)
    {
        cout<<"ten";
    }
    else if(number == 11)
    {
        cout<<"eleven";
    }
    
}