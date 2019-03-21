#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ShoppingCart.h"

// typedef struct ShoppingCart {
//     char customerName[50];
//     char currentDate[50];
//     int cartSize;
//     ItemToPurchase cartItems[10];
// } ShoppingCart;

ShoppingCart AddItem(ItemToPurchase item, ShoppingCart cart) {
    // Adds an item to cart
    return cart;
}

ShoppingCart RemoveItem(char item_name[], ShoppingCart cart) {
    // Removes an item from cart
    return cart;
}

ShoppingCart ModifyItem(ItemToPurchase item, ShoppingCart cart) {
    // Modifies contents (name, qty, etc.) of an item in cart
    return cart;
}

int GetNumItemsInCart(ShoppingCart cart) {
    // Returns the total quantity of items in a cart
    return 0;
}

int GetCostOfCart(ShoppingCart cart) {
    // Returns the total cost of items in a cart
    return 0;
}

void PrintTotal(ShoppingCart cart) {
    // Outputs total of objects in cart (?)
    return;
}

void PrintDescriptions(ShoppingCart cart) {
    // Outputs each item's description
    return;
}