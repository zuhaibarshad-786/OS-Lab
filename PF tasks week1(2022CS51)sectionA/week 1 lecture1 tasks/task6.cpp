#include<iostream>
using namespace std;
main()
{
    float minutes;
    float totalHours;
    cout<<"Enter minutes:"<<endl;
    cin>>minutes;
    totalHours = minutes / 60 ;
    cout<<"Total no of hours are:"<<totalHours<<endl;
    cout<<"And total minutes are:"<<minutes;
}