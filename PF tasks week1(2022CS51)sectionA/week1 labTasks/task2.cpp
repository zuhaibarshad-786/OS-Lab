#include<iostream>
using namespace std;
main()
{
      int side1, side2, side3;
      int sum;
    cout << "Enter first angle of triangle" << endl;
    cin >> side1;
    cout << "Enter second angle of triangle" << endl;
    cin >> side2;
    cout << "Enter third angle of triangle" << endl;
    cin >> side3;
    sum = side1 + side2 + side3;
    if(sum == 180)
    {
        cout<<"Valid Triangle"<<endl;
    }
    else
    {
        cout<<"Invalid Triangle"<<endl;
    }

}