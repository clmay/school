#ifndef ITEMTOPURCHASE__INC__
#define ITEMTOPURCHASE__INC__

#include <stdio.h>
#include <stdlib.h>

#define MAX_NAME_LEN 50
#define MAX_DESC_LEN 100

typedef struct ItemToPurchase {
    char itemName[MAX_NAME_LEN];
    char itemDescription[MAX_DESC_LEN];
    int itemPrice;
    int itemQuantity;
} ItemToPurchase;

void MakeItemBlank(ItemToPurchase* item);
void PrintItemCost(ItemToPurchase item);
void PrintItemDescription(ItemToPurchase item);

#endif