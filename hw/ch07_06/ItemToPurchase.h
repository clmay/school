#ifndef EMPLOYEE__INC__
#define EMPLOYEE__INC__

#include <stdio.h>
#include <stdlib.h>

#define NAME_SIZE 50

typedef struct ItemToPurchase {
    char itemName[NAME_SIZE];
    int itemPrice;
    int itemQuantity;
} ItemToPurchase;

void MakeItemBlank(ItemToPurchase* item);
void PrintItemCost(ItemToPurchase item);

#endif