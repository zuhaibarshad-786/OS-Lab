#include<iostream>
using namespace std;
main()
{
   float athlete1Time,athlete2Time,athlete3Time;
   int totalTime;
   int mod;
   int temp;
   cout<<"Enter  1.Athlete finishes time:";
   cin>>athlete1Time;
   cout<<"Enter  2.Athlete finishes time:";
   cin>>athlete2Time;
   cout<<"Enter  3.Athlete finishes time:";
   cin>>athlete3Time;
   totalTime = athlete1Time+athlete2Time+athlete3Time;
   mod = totalTime % 60;
   temp = totalTime / 60;
   cout<<"Their total time is"<<endl;
   cout<<temp<<":"<<mod;
   
    
}

