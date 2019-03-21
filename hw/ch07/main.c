#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ShoppingCart.h"
#include "ItemToPurchase.h"

int main(int argc, char const *argv[])
{
    ShoppingCart cart;
    // Initialize struct
    strcpy(cart.customerName, "John Doe");
    strcpy(cart.currentDate, "February 1, 2016");
    cart.cartSize = 0;

    PrintTotal(cart);

    return 0;
}
