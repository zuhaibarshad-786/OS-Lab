#include<iostream>
#include<cmath>
using namespace std;
main()
{
    float volume;
    float radius;
    cout<< "Enter radius" << endl;
    cin >> radius;
    volume = (4.0 / 3 * 3.14) * pow(radius, 3);
    cout << "Volume is:" << volume;
}