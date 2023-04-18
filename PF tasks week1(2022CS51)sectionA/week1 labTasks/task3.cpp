#include <iostream>
using namespace std;
main()
{
    int netPrice;
    int copiesSold;
    int paidPrice = 5000;
    int afterPublished = 20000;
    int case1, case2, case3;
    int largeValue = 0;

    cout << "Enter net price:";
    cin >> netPrice;
    cout << "Enter copies Sold:";
    cin >> copiesSold;

    case1 = paidPrice + afterPublished;
    largeValue = case1;
    case2 = ((netPrice * 12.5) / 100) * copiesSold;
    if (case2 > largeValue)
    {
        largeValue = case2;
    }
    if (copiesSold > 4000)
    {
        int copiesSold1 = copiesSold - 4000;
        int netPrice1 = ((netPrice * 10) / 100) * 4000;
        int netPrice2 = (netPrice * 14) / 100 * copiesSold1;
        int finalPrice = netPrice1 + netPrice2;
        case3 = finalPrice;
        if (case3 > largeValue)
        {
            largeValue = case3;
        }
    }
    else if (copiesSold <= 4000)
    {
        int price = ((netPrice * 10) / 100) * copiesSold;
        case3 = price;
        if (case3 > largeValue)
        {
            largeValue = case3;
        }
    }
    cout << "a."
         << " " << case1 << endl;
    cout << "b."
         << " " << case2 << endl;
    cout << "c."
         << " " << case3 << endl;
    cout << largeValue << " "
         << "is best option" << endl;
}