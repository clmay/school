/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.cpp
 *
 *    Description:  Shopping cart library 
 *
 *        Version:  1.0
 *        Created:  04/09/2019 03:39:10 PM
 *       Revision:  none
 *       Compiler (C++):  g++ ShoppingCart.cpp -o ShoppingCart.out -lm
 *          Usage:  ./ShoppingCart.out 
 *
 *         Author:  Hugo Valle (), hugovalle1@weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */

// Function Definitions
#include <iostream>
using namespace std;

#include "ShoppingCart.h"

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ShoppingCart
 *  Description:  Default Constructor
 * =====================================================================================
 */

ShoppingCart::ShoppingCart() 
{
   customerName = "none";
   currentDate = "January 1, 2016";
   vector<ItemToPurchase> cartItems;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ShoppingCart
 *  Description:  Constructor with name and date parameters
 * =====================================================================================
 */

ShoppingCart::ShoppingCart(string name, string date)
{
    customerName = name;
    currentDate = date;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetCustomerName
 *  Description:  Return customer name
 * =====================================================================================
 */

string ShoppingCart::GetCustomerName() const
{
    return this->customerName;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetDate
 *  Description:  Return currentDate
 * =====================================================================================
 */
      
string ShoppingCart::GetDate() const
{
    return this->currentDate;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  AddItem
 *  Description:  Add item object to cartItems vector
 * =====================================================================================
 */

void ShoppingCart::AddItem(ItemToPurchase item)
{
    this->cartItems.push_back(item);
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  RemoveItem
 *  Description:  Remove item from vector
 * =====================================================================================
 */

void ShoppingCart::RemoveItem(string name) 
{
    unsigned i = 0;
    // unsigned posItem;
    unsigned cartSize;
    bool found;

    // posItem = 0;
    cartSize = cartItems.size();
    found = false;

    // Loop over vector to search for name
    for(i = 0; i < cartSize; ++i) 
    {
        // Hint: to access a vector item by index use: "at(i)" method
        // For example to get the name, use: cartItems.at(i).GetName()
        if (cartItems.at(i).GetName() == name)
        {
            found = true;
            cartItems.erase(cartItems.begin() + i);
        }
    }

    if(!found) 
    {
        cout << "Item not found in cart. Nothing removed." << endl;
    }
    // Shrink vector
    cartItems.resize(cartSize - 1);
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ModifyItem
 *  Description:  Modify existing item. 
 * =====================================================================================
 */

void ShoppingCart::ModifyItem(ItemToPurchase item) {
    unsigned i;
    ItemToPurchase currItem;
    bool found;

    found = false;

    for(i = 0; i < cartItems.size(); ++i) 
    {
        if(cartItems.at(i).GetName() == item.GetName()) 
        {
            // Check if it is name is not "none"

            // Check if it is price is not 0

            // Check if it is qty is not 0
        }
    }

    if(!found) 
    {
        cout << "Item not found in cart. Nothing modified." << endl;
    }
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetNumItemsInCart
 *  Description:  Return the number of items in the cart
 * =====================================================================================
 */

int ShoppingCart::GetNumItemsInCart()
{
    return 0;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetCostOfCart
 *  Description:  Get the total cost of the cart. Loop over the cart items and 
 *  add up the cost
 * =====================================================================================
 */

double ShoppingCart::GetCostOfCart() 
{
   unsigned i = 0;
   int totalCost;
   
   totalCost = 0;
   
   for(i = 0; i < cartItems.size(); ++i) 
   {
       totalCost += cartItems.at(i).GetQuantity() * cartItems.at(i).GetPrice();
   }
   
   return totalCost;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintTotal
 *  Description:  Print Cart Total
 * =====================================================================================
 */

void ShoppingCart::PrintTotal() {
    unsigned i;
    int totalCost;

    totalCost = 0;

    cout << customerName << "'s Shopping Cart - " << currentDate << endl;
    cout << "Number of Items: " << GetNumItemsInCart() << endl << endl;

    if(cartItems.size() > 0) 
    {
        for(i = 0; i < cartItems.size(); ++i) 
        {
            cartItems.at(i).PrintItemCost();
        }
    }

    else 
    {
        cout << "SHOPPING CART IS EMPTY" << endl;
    }

    totalCost = GetCostOfCart();

    cout << endl << "Total: $" << totalCost << endl;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  PrintDescriptions
 *  Description:  Print item cart descriptions
 * =====================================================================================
 */

void ShoppingCart::PrintDescriptions() 
{
    unsigned i;

    cout << customerName << "'s Shopping Cart - " << currentDate << endl << endl;
    cout << "Item Descriptions" << endl;

    if(cartItems.size() > 0) 
    {
        for(i = 0; i < cartItems.size(); ++i) 
        {
            cartItems.at(i).PrintItemDescription();
        }
    }

    else 
    {
        cout << "SHOPPING CART IS EMPTY" << endl;
    }
}