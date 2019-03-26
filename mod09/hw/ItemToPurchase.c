#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ItemToPurchase.h"

void MakeItemBlank(ItemToPurchase* item) {
    strcpy(item->itemName, "none");
    strcpy(item->itemDescription, "none");
    item->itemPrice = 0;
    item->itemQuantity = 0;
}

void PrintItemCost(const ItemToPurchase* item) {
    printf("%s %d @ $%d = $%d\n"
            , item->itemName
            , item->itemQuantity
            , item->itemPrice
            , item->itemPrice * item->itemQuantity
        );
}

void PrintItemDescription(const ItemToPurchase* item) {
    printf("%s: %s\n", item->itemName, item->itemDescription);
}