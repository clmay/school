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

int GetNumItemsInCart(const ShoppingCart* cart); // Returns the total quantity of items in a cart
int GetCostOfCart(const ShoppingCart* cart); // Returns the total cost of items in a cart
void PrintTotal(const ShoppingCart* cart); // Outputs total number of items in cart
void PrintDescriptions(const ShoppingCart* cart); // Outputs each item's description
ShoppingCart AddItem(ItemToPurchase* item, ShoppingCart* cart); // Adds an item to cart
ShoppingCart RemoveItem(char item_name[], ShoppingCart* cart); // Removes an item from cart
ShoppingCart ModifyItem(ItemToPurchase* item, ShoppingCart* cart); // Modifies contents (name, qty, etc.) of an item in cart

#endif