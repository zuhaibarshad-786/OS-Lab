#include <iostream>
using namespace std;
main()
{
    int neededHours;
    int workers;
    int days;
    int totalHours = 309;
    int requiredHours = 84;
    int finalHours;
    cout << "Enter needed hours:";
    cin >> neededHours;
    cout << "Enter workers to complete this project:";
    cin >> workers;
    cout << "Enter days required to finish this project:";
    cin >> days;
    int calculate = (days * neededHours) / workers;
    finalHours = totalHours - calculate;
    if (finalHours >= requiredHours)
    {
        cout << "Yes"
             << " " << finalHours << " Hours are left" << endl;
    }
   else if (finalHours < requiredHours)
    {
        int enoughHoursRequired = requiredHours - finalHours;
        cout << "Not enough time !"
             << " " << enoughHoursRequired << " hours needed" << endl;
    }
}