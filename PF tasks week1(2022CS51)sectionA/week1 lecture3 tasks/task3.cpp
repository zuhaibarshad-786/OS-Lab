#include<iostream>
using namespace std;
main()
{
    int number1;
    int number2;
    char operators;
    cout<<"Enter number 1:";
    cin>>number1;
    cout<<"Enter number 2:";
    cin>>number2;
    cout<<"Enter operator to perform this operation(+,-,/,%):";
    cin>>operators;
    if(operators == '+')
    {
      int add = number1 + number2;
      if(add % 10 == 0)
      {
        cout<<add<<" "<<"Odd"<<endl; 
      }
      else
      {
        cout<<add<<" "<<"Even"<<endl;
      }
    }
    else if(operators == '-')
    {
      int sub = number1 - number2;
      if(sub % 10 == 0)
      {
        cout<<sub<<" "<<"Even"<<endl; 
      }
      else
      {
        cout<<sub<<" "<<"Odd"<<endl;
      }
    }
     else if(operators == '*')
    {
      int mul = number1 * number2;
      cout<<mul;
    }
    else if(operators == '%')
    {
        if(number2 == 0)
        {
            cout<<number1<<" "<<"cannot divide by zero"<<endl;
        }
        else
        {
          int mod = number1 % number2;
          cout<<mod;
        }
    }
    else if(operators == '/')
    {
        if(number2 == 0)
        {
            cout<<number1<<" "<<"cannot divide by zero"<<endl;
        }
        else
        {
          float divide = number1 / number2;
          cout<<divide;
        }
    }
      

}