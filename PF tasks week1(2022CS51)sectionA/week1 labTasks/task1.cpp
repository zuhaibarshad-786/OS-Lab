#include <iostream>
using namespace std;
main()
{
    int side1, side2, side3;
    cout << "Enter first side of triangle" << endl;
    cin >> side1;
    cout << "Enter second side of triangle" << endl;
    cin >> side2;
    cout << "Enter third side of triangle" << endl;
    cin >> side3;
    if ((side1 == side2) && (side2 == side3) && (side3 == side1))
    {
        cout << "Triangle is Equilateral" << endl;
    }
    else if ((side1 != side2) && (side2 != side3) && (side3 != side1))
    {
        cout << "Triangle is Scalene" << endl;
    }
      else 
    {
        cout << "Triangle is Isosceles" << endl;
    }
}