#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ShoppingCart.h"
#include "ItemToPurchase.h"

int main(int argc, char const *argv[])
{
    ShoppingCart cart;
    // Initialize ShoppingCart
    strcpy(cart.customerName, "John Doe");
    strcpy(cart.currentDate, "February 1, 2016");
    cart.cartSize = 0;

    ItemToPurchase item1;
    // Initialize an ItemToPurchase
    strcpy(item1.itemName, "Nike Romaleos");
    item1.itemQuantity = 2;
    item1.itemPrice = 189;

    PrintTotal(cart);
    cart = AddItem(item1, cart);
    PrintTotal(cart);

    return 0;
}
