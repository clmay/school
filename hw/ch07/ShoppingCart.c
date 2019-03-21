#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ShoppingCart.h"

ShoppingCart AddItem(ItemToPurchase item, ShoppingCart cart) {
    // Adds an item to cart
    cart.cartItems[cart.cartSize] = item;
    cart.cartSize++;
    return cart;
}

ShoppingCart RemoveItem(char item_name[], ShoppingCart cart) {
    // Removes an item from cart
    for (int i = 0; i < cart.cartSize; i++) {
        if (strcmp(item_name, cart.cartItems[i].itemName) == 0) {
            MakeItemBlank(&cart.cartItems[i]);
            cart.cartSize--;
        }
    }
    
    return cart;
}

ShoppingCart ModifyItem(ItemToPurchase item, ShoppingCart cart) {
    // Modifies contents (name, qty, etc.) of an item in cart
    return cart;
}

int GetNumItemsInCart(ShoppingCart cart) {
    // Returns the total quantity of items in a cart
    int count = 0;
    for (int i = 0; i < cart.cartSize; i++) {
        count += cart.cartItems[i].itemQuantity;
    }
    return count;
    return 0;
}

int GetCostOfCart(ShoppingCart cart) {
    // Returns the total cost of items in a cart
    int total = 0;
    for (int i = 0; i < cart.cartSize; i++) {
        total += cart.cartItems[i].itemPrice * cart.cartItems[i].itemQuantity;
    }
    return total;
}

void PrintTotal(ShoppingCart cart) {
    // Outputs total of objects in cart (?)
    printf("%s's Shopping Cart - %s\n", cart.customerName, cart.currentDate);
    printf("Number of Items: %d\n\n", cart.cartSize);
    for (int i = 0; i < cart.cartSize; i++) {
        PrintItemCost(cart.cartItems[i]);
    }
    printf("\nTotal: $%d\n", GetCostOfCart(cart));
}

void PrintDescriptions(ShoppingCart cart) {
    // Outputs each item's description
    return;
}