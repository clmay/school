#ifndef SHOPPINGCART__INC__
#define SHOPPINGCART__INC__

#include <stdio.h>
#include <stdlib.h>
#include "ItemToPurchase.h"

#define CUST_NAME_LEN 50
#define CURR_DATE_LEN 20
#define MAX_CART_SIZE 10

typedef struct ShoppingCart {
    char customerName[CUST_NAME_LEN];
    char currentDate[CURR_DATE_LEN];
    int cartSize;
    ItemToPurchase cartItems[MAX_CART_SIZE];
} ShoppingCart;

ShoppingCart AddItem(ItemToPurchase item, ShoppingCart cart); // Adds an item to cart
ShoppingCart RemoveItem(char item_name[], ShoppingCart cart); // Removes an item from cart
ShoppingCart ModifyItem(ItemToPurchase item, ShoppingCart cart); // Modifies contents (name, qty, etc.) of an item in cart
int GetNumItemsInCart(ShoppingCart cart); // Returns the total quantity of items in a cart
int GetCostOfCart(ShoppingCart cart); // Returns the total cost of items in a cart
void PrintTotal(ShoppingCart cart); // Outputs total of objects in cart (?)
void PrintDescriptions(ShoppingCart cart); // Outputs each item's description

#endif