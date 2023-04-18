#include <iostream>
using namespace std;
main()
{
    int totalArea;
    int sizeVegetables;
    int seedCost, plantationCost, fertilizingCost, loborCost;
    int vegSellingPrice;
    int vegSellingPrice1;
    int vegSellingPrice2;
    int totalRevenue;
    int totalCost;
    int area1;
    int area2;
    cout << "Enter the total farm area in acres:" << endl;
    cin >> totalArea;
    cout << "Enter The number of vegetables (one or two) that the user wants to grow :" << endl;
    cin >> sizeVegetables;
    if(sizeVegetables == 1)
    {
    cout << " Enter the seed cost:" << endl;
    cin >> seedCost;
    cout << "Enter plantation cost:" << endl;
    cin >> plantationCost;
    cout << "Enter fertilizing cost:" << endl;
    cin >> fertilizingCost;
    cout << "Enter labor cost:" << endl;
    cin >> loborCost;
    cout << "Enter vegetable selling price:" << endl;
    cin >> vegSellingPrice;
    totalRevenue = vegSellingPrice * totalArea;
    totalCost = (seedCost + plantationCost + fertilizingCost + loborCost) * totalArea;
    cout<<"Revenue is:"<<" "<<totalRevenue<<endl;
    cout<<"Cost is:"<<" "<<totalCost<<endl;
    if(totalRevenue > totalCost)
    {
        cout<<"Profit"<<endl;
    }
    else
    {
        cout<<"Lose"<<endl;
    }
    }
    else if(sizeVegetables == 2)
    {
        cout<<"Enter Area of vegitable 1:"<<endl;
        cin>>area1;
        cout<<"Enter Area of vegitable 2:"<<endl;
        cin>>area2;
         cout << " Enter the seed cost:" << endl;
    cin >> seedCost;
    cout << "Enter plantation cost:" << endl;
    cin >> plantationCost;
    cout << "Enter fertilizing cost:" << endl;
    cin >> fertilizingCost;
    cout << "Enter labor cost:" << endl;
    cin >> loborCost;
    cout << "Enter vegetable selling price V1:" << endl;
    cin >> vegSellingPrice1;
    cout << "Enter vegetable selling price V2:" << endl;
    cin >> vegSellingPrice2;
    totalRevenue = (vegSellingPrice1 +  vegSellingPrice2)  * (area1 + area2);
    totalCost = (seedCost + plantationCost + fertilizingCost + loborCost) *(area1 + area2);
    cout<<"Revenue is:"<<" "<<totalRevenue<<endl;
    cout<<"Cost is:"<<" "<<totalCost<<endl;
    if(totalRevenue > totalCost)
    {
        cout<<"Profit"<<endl;
    }
    else
    {
        cout<<"Lose"<<endl;
    }

    }
}
    // 6. Output the total revenue.
    // 7. Output the profit/loss.
