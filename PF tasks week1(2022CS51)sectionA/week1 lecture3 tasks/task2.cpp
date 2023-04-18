#include<iostream>
using namespace std;
main()
{
    float budget;
    string season;
    cout<<"Enter your budget:";
    cin>>budget;
    cout<<"Enter whose season you want to visit:";
    cin>>season;
    if(budget <= 100 && (season == "summer" || season == "Summer"))
    {
       int discount1 = (budget * 30)/100;
       cout<<"Somewhere in Bulgaria"<<endl;
       cout<<"Camp"<<" "<<discount1;
    }
    else if(budget <= 100 && season == "winter" || season == "Winter")
    {
       int discount2 = (budget * 70)/100;
       cout<<"Somewhere in Bulgaria"<<endl;
       cout<<"Hotel"<<" "<<discount2;
    }
   else if(budget <= 1000 && season == "summer" || season == "Summer")
    {
       int discount3 = (budget * 40)/100;
       cout<<"Somewhere in Bulgans"<<endl;
       cout<<"Camp"<<" "<<discount3;
    }
    else if(budget <= 1000 && season == "winter" || season == "Winter")
    {
       int discount4 = (budget * 80)/100;
       cout<<"Somewhere in Bulgans"<<endl;
       cout<<"Hotel"<<" "<<discount4;
    }
     else if(budget > 1000)
    {
       int discount5 = (budget * 90)/100;
       cout<<"Somewhere in Europe"<<endl;
       cout<<"Hotel"<<" "<<discount5;
    }
    }