#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ShoppingCart.h"

int GetNumItemsInCart(const ShoppingCart* cart) {
    // Returns the total quantity of items in a cart
    int count = 0;
    for (int i = 0; i < cart.cartSize; i++) {
        count += cart.cartItems[i].itemQuantity;
    }
    return count;
    return 0;
}

int GetCostOfCart(const ShoppingCart* cart) {
    // Returns the total cost of items in a cart
    int total = 0;
    for (int i = 0; i < cart.cartSize; i++) {
        total += cart.cartItems[i].itemPrice * cart.cartItems[i].itemQuantity;
    }
    return total;
}

void PrintTotal(const ShoppingCart* cart) {
    // Outputs total number of items in cart
    printf("%s's Shopping Cart - %s\n", cart.customerName, cart.currentDate);
    printf("Number of Items: %d\n\n", GetNumItemsInCart(cart));
    if (GetNumItemsInCart(cart) == 0) {
        printf("SHOPPING CART IS EMPTY\n");
    } else {
        for (int i = 0; i < cart.cartSize; i++) {
            PrintItemCost(cart.cartItems[i]);
        }
    }
    printf("\nTotal: $%d\n\n", GetCostOfCart(cart));
}

void PrintDescriptions(const ShoppingCart* cart) {
    // Outputs each item's description
    printf("%s's Shopping Cart - %s\n\n", cart.customerName, cart.currentDate);
    printf("Item Descriptions\n");
    for (int i = 0; i < cart.cartSize; i++) {
        PrintItemDescription(cart.cartItems[i]);
    }
    printf("\n");
}

ShoppingCart AddItem(ItemToPurchase* item, ShoppingCart* cart) {
    // Adds an item to cart
    cart.cartItems[cart.cartSize] = item;
    cart.cartSize++;
    return cart;
}

ShoppingCart RemoveItem(char item_name[], ShoppingCart* cart) {
    // Removes an item from cart
    for (int i = 0; i < cart.cartSize; i++) {
        if (strcmp(item_name, cart.cartItems[i].itemName) == 0) {
            cart.cartItems[i].itemQuantity = 0;
        }
    }
    return cart;
}

ShoppingCart ModifyItem(ItemToPurchase* item, ShoppingCart* cart) {
    // Modifies contents (name, qty, etc.) of an item in cart
    return cart;
}
