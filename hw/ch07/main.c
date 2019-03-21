#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ShoppingCart.h"
#include "ItemToPurchase.h"

#define CUST_NAME_LEN 50
#define CURR_DATE_LEN 20
#define ITEM_NAME_LEN 50
#define ITEM_DESC_LEN 100

void PrintMenu(ShoppingCart cart);
void MenuAddItem(ShoppingCart cart);
void MenuRemoveItem(ShoppingCart cart);
void MenuChangeItemQty(ShoppingCart cart);
void MenuPrintDescriptions(ShoppingCart cart);
void MenuOutputCart(ShoppingCart cart);

int main(int argc, char const *argv[]) {
    // Declare variables
    char name[CUST_NAME_LEN];
    char date[CURR_DATE_LEN];
    ShoppingCart cart;

    // Take user input: customer name
    printf("Enter Customer's Name:\n");
    fgets(name, CUST_NAME_LEN, stdin);
    name[strlen(name) - 1] = '\0';

    // Take user input: current date
    printf("Enter Today's Date:\n");
    fgets(date, CURR_DATE_LEN, stdin);
    date[strlen(date) - 1] = '\0';

    // Initialize ShoppingCart
    strcpy(cart.customerName, name);
    strcpy(cart.currentDate, date);
    cart.cartSize = 0;

    // Print initial information
    printf("\nCustomer Name: %s\n", cart.customerName);
    printf("Today's Date: %s\n", cart.currentDate);
    PrintMenu(cart);

    return 0;
}

void PrintMenu(ShoppingCart cart) {
    char choice;
    char throwaway;

    printf("\nMENU\n");
    printf("a - Add item to cart\n");
    printf("r - Remove item from cart\n");
    printf("c - Change item quantity\n");
    printf("i - Output items' descriptions\n");
    printf("o - Output shopping cart\n");
    printf("q - Quit\n\n");
    
    do {
        printf("Choose an option: ");
        scanf(" %c%c", &choice, &throwaway);

        switch (choice) {
            case 'q':
                break;
            case 'a':
                MenuAddItem(cart);
                PrintMenu(cart);
                break;
            case 'r':
                break;
            case 'c':
                break;
            case 'i':
                break;
            case 'o':
                break;
        }
    } while (choice != 'q');
}

void MenuAddItem(ShoppingCart cart) {
    char item_name[ITEM_NAME_LEN];
    char item_desc[ITEM_DESC_LEN];
    int item_price = 0;
    int item_qty = 0;
    ItemToPurchase item;

    printf("ADD ITEM TO CART\n");

    printf("Enter the item name:\n");
    fgets(item_name, ITEM_NAME_LEN, stdin);
    item_name[strlen(item_name) - 1] = '\0';
    strcpy(item.itemName, item_name);

    printf("Enter the item description:\n");
    fgets(item_desc, ITEM_DESC_LEN, stdin);
    item_desc[strlen(item_desc) - 1] = '\0';
    strcpy(item.itemDescription, item_desc);

    printf("Enter the item price:\n");
    scanf(" %d", &item_price);
    printf("Enter the item quantity:\n");
    scanf(" %d", &item_qty);

    AddItem(item, cart);
}

void MenuRemoveItem(ShoppingCart cart) {
    return;
}

void MenuChangeItemQty(ShoppingCart cart) {
    return;
}

void MenuPrintDescriptions(ShoppingCart cart) {
    return;
}

void MenuOutputCart(ShoppingCart cart) {
    return;
}