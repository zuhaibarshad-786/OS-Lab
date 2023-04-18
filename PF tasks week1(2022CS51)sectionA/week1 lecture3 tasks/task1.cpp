#include<iostream>
using namespace std;
main()
{
    int examTimeHours;
    int examTimeMinutes;
    int hoursArrival;
    int minutesArrival;
    cout<<"Enter Exam starting time in hours:";
    cin>>examTimeHours;
    cout<<"Enter Exam starting minutes:";
    cin>>examTimeMinutes;
    cout<<"Enter hours of arrival:";
    cin>>hoursArrival;
    cout<<"Enter minutes of arrival:";
    cin>>minutesArrival;
    int finalHours = (examTimeHours * 60) + examTimeMinutes;
    int arrivalHours = (hoursArrival * 60) + minutesArrival;
    if(arrivalHours == finalHours)
    {
        cout<<"On time"<<endl;
    }
    else if(arrivalHours > finalHours)
    {
        int result = arrivalHours - finalHours;
        cout<<"Late"<<endl;
        cout<<result<<" "<<"minutes after the start"<<endl; 
    }  
}