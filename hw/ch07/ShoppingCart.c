#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ShoppingCart.h"

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
    printf("%s's Shopping Cart - %s\n", cart.customerName, cart.currentDate);
    printf("Number of Items: %d\n\n", cart.cartSize);
    for(int i = 0; i < cart.cartSize; i++) {
        PrintItemCost(cart.cartItems[i]);
    }
}

void PrintDescriptions(ShoppingCart cart) {
    // Outputs each item's description
    return;
}