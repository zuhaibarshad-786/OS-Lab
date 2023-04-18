#include<iostream>
using namespace std;
main()
{
    float hours;
    float minutes;
    float totalMinutes;
    cout<<"Enter hours:"<<endl;
    cin>>hours;
    cout<<"Enter minutes:"<<endl;
    cin>>minutes;
    totalMinutes = (hours * 60 )+ minutes;
    cout<<"Total num of minutes are:"<<totalMinutes;


}