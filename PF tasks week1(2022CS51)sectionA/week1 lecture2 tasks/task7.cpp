#include <iostream>
using namespace std;
main()
{
    int number;
    int ones;
    int tens;
    cout << "Enter any number in the range from (0 to 100):";
    cin >> number;
    string arr[20] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
                      "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string arr2[11] = {" ", "ten", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety", "hundred"};

    if (number > 0 && number < 20)
    {
        cout << arr[number];
    }
    else if (number % 10 == 0)
    {
        cout << arr2[number / 10];
    }
    else
    {
        ones = number % 10;
        tens = number / 10;
        cout << arr2[tens] << " " << arr[ones];
    }
}