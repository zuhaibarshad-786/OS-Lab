#include <iostream>
using namespace std;
main()
{
  float costRoom;
  int numOfRooms;
  int days;
  float salesTax;
  // float discount = 0;
  int discountPer;
  cout << "Enter cost Room:";
  cin >> costRoom;
  cout << "Enter number of Rooms Booked:";
  cin >> numOfRooms;
  cout << "Enter days:";
  cin >> days;
  cout << "Sales Tax:";
  cin >> salesTax;

  if (numOfRooms >= 10 && numOfRooms < 20)
  {
    if (days > 3)
    {
      discountPer = 15;
    }
    else
    {
      discountPer = 10;
    }
  }
  else if (numOfRooms >= 20 && numOfRooms < 30)
  {
    if (days > 3)
    {
      discountPer = 25;
    }
    else
    {
      discountPer = 20;
    }
  }
    else if (numOfRooms >= 30)
    {
      if (days > 3)
      {
        discountPer = 35;
      }
      else
      {
        discountPer = 30;
      }
    }
    cout << "Cost of Room :" << costRoom << endl;
    cout << "Discount on each Room as a percent 15%:" << endl;
    cout << "Number of Rooms booked:" << numOfRooms << endl;
    cout << "The numbers of days the Rooms are booked:" << days << endl;
    cout << "Sales tax:" << salesTax << endl;
    float total = (costRoom * numOfRooms * days);
    int discount1 = (total * discountPer) / 100;
    float finalPrice = total - discount1;
    cout << "Total Cost of the Room is:" << finalPrice << endl;
    float salestax = (finalPrice * salesTax) / 100;
    float billingPrice = finalPrice + salestax;
    cout << "Total Billing Amount by adding SalesTax is:" << billingPrice << endl;
  }