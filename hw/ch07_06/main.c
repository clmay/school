#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ItemToPurchase.h"

#define NAME_SIZE 50
#define NUM_ITEMS 2

int main(int argc, char const *argv[])
{
    char name1[NAME_SIZE];
    char name2[NAME_SIZE];
    int price = 0;
    int qty = 0;
    ItemToPurchase item1 = {"none", 0, 0};
    ItemToPurchase item2 = {"none", 0, 0};

    for (int i = 0; i < NUM_ITEMS; i++) {
        printf("Item %d\n", i + 1);

        printf("Enter the item name:\n");
        scanf(" %s", name1);
        scanf(" %s", name2);
        strcat(name1, " ");
        strcat(name1, name2);

        printf("Enter the item price:\n");
        scanf(" %d", &price);

        printf("Enter the item quantity:\n");
        scanf(" %d", &qty);

        if (i == 0) {
            strcpy(item1.itemName, name1);
            item1.itemPrice = price;
            item1.itemQuantity = qty;
        }
        if (i == 1) {
            strcpy(item2.itemName, name1);
            item2.itemPrice = price;
            item2.itemQuantity = qty;
        }
        printf("\n");
    }
    printf("TOTAL COST\n");
    PrintItemCost(item1);
    PrintItemCost(item2);
    printf("\nTotal: $%d\n", item1.itemPrice * item1.itemQuantity 
                          + item2.itemPrice * item2.itemQuantity
                        );

    return 0;
}
