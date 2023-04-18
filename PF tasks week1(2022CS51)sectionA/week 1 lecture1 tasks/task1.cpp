#include<iostream>
using namespace std;
main()
{
    float centigrade;
    float fahrenheit;
    cout<<"Enter number in celcius"<<endl;
    cin>>centigrade;
    fahrenheit = (centigrade * 5/9) + 32;
     cout<<"Value in fahrenheit is:"<<fahrenheit;
}