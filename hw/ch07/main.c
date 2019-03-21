#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ShoppingCart.h"
#include "ItemToPurchase.h"

#define CUST_NAME_LEN 50
#define CURR_DATE_LEN 20

void PrintMenu(ShoppingCart cart);

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
    char choice = ' ';
    do {
        printf("\nMENU\n");
        printf("a - Add item to cart\n");
        printf("r - Remove item from cart\n");
        printf("c - Change item quantity\n");
        printf("i - Output items' descriptions\n");
        printf("o - Output shopping cart\n");
        printf("q - Quit\n\n");
        printf("Choose an option: ");
        scanf(" %c", &choice);

        switch (choice) {
            case 'q':
                break;
            case 'a':
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