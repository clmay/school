#ifndef ITEMTOPURCHASE__INC__
#define ITEMTOPURCHASE__INC__

#include <stdio.h>
#include <stdlib.h>

#define ITEM_NAME_LEN 50
#define ITEM_DESC_LEN 100

typedef struct ItemToPurchase {
    char itemName[ITEM_NAME_LEN];
    char itemDescription[ITEM_DESC_LEN];
    int itemPrice;
    int itemQuantity;
} ItemToPurchase;

void MakeItemBlank(ItemToPurchase* item);
void PrintItemCost(ItemToPurchase item);
void PrintItemDescription(ItemToPurchase item);

#endif