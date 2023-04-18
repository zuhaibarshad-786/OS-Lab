#include<iostream>
using namespace std;
main()
{
  int firstSide;
  int secSide;
  int thirdSide;
  cout<<"Enter first side:";
  cin>>firstSide;
  cout<<"Enter second side:";
  cin>>secSide;
  thirdSide = 180 - firstSide - secSide;
  cout<<"Third missing side of the triangle is:"<<thirdSide;  
}