/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/09/2019 03:20:47 PM
 *       Revision:  none
 *       Compiler (C):    gcc main.cpp -o main.out -lm
 *       Compiler (C++):  g++ main.cpp -o main.out -lm
 *          Usage:  ./main.out 
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
// For C++ Code
#include <iostream>
#include <iomanip>
#include "ItemToPurchase.h"
using namespace std;

// Main Function
int main()
{
    int i;
    const int NUM_ITEMS = 2;
    string name;
    int price;
    int quantity;
    double total;
    ItemToPurchase item1;
    ItemToPurchase item2;

    for (i = 0; i < NUM_ITEMS; ++i) 
    {
        cout << "Item " << i + 1 << endl;
        cout << "Enter the item name:" << endl;
        getline(cin, name);

        cout << "Enter the item price:" << endl;
        cin >> price;

        cout << "Enter the item quantity:" << endl;
        cin >> quantity;
        cout << endl;

        // Set the Object values for 1
        if (i == 0) {
            item1.SetName(name);
            item1.SetPrice(price);
            item1.SetQuantity(quantity);
        }

        // Set the Object values for 2
        if (i == 1) {
            item2.SetName(name);
            item2.SetPrice(price);
            item2.SetQuantity(quantity);
        }
        

        cin.ignore();
    }

    // Calculate the total
    total = (item1.GetQuantity() * item1.GetPrice()) + (item2.GetQuantity() * item2.GetPrice());

    // Print Total
    cout << "TOTAL COST" << endl;
    item1.Print();
    item2.Print();
    cout << endl;
    cout << "Total: $" << total << endl;

    return 0;
}
