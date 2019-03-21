// zyBooks, Chapter 3.21 (https://learn.zybooks.com/zybook/WEBERCS2250ValleSpring2019/chapter/3/section/21)

#include <stdio.h>
#include <string.h>

int main(void) {
  // User-input vars
  int result;
  char str1[25] = "";
  char str2[25] = "";
  char str3[25] = "";
  char str4[25] = "";

  // Service names
  char oil_change[] = "Oil change";
  char tire_rotation[] = "Tire rotation";
  char car_wash[] = "Car wash";
  char car_wax[] = "Car wax";

  // Service prices
  int oil_change_price = 35;
  int tire_rotation_price = 19;
  int car_wash_price = 7;
  int car_wax_price = 12;
  int invoice_total = 0;

  // Print menu
  printf("Davy's auto shop services\n");
  printf("%s -- $%d\n", oil_change, oil_change_price);
  printf("%s -- $%d\n", tire_rotation, tire_rotation_price);
  printf("%s -- $%d\n", car_wash, car_wash_price);
  printf("%s -- $%d\n", car_wax, car_wax_price);

  // Take input
  printf("\nSelect first service:\n");
  scanf("%s", str1);
  result = strcmp(str1, "-");
  if (result != 0) {
    scanf("%s", str2);
    strcat(strcat(str1, " "), str2);
  }

  printf("Select second service:\n");
  scanf("%s", str3);
  result = strcmp(str3, "-");
  if (result != 0) {
    scanf("%s", str4);
    strcat(strcat(str3, " "), str4);
  }

  // Output "invoice"
  printf("\nDavy's auto shop invoice\n");

  // Service 1:
  result = strcmp(str1, oil_change);
  if (result == 0) {
    invoice_total += oil_change_price;
    printf("\nService 1: %s, $%d\n", oil_change, oil_change_price);
  } else {
    result = strcmp(str1, tire_rotation);
    if (result == 0) {
      invoice_total += tire_rotation_price;
      printf("\nService 1: %s, $%d\n", tire_rotation, tire_rotation_price);
    } else {
       result = strcmp(str1, car_wash);
       if (result == 0) {
         invoice_total += car_wash_price;
         printf("\nService 1: %s, $%d\n", car_wash, car_wash_price);
       } else {
          result = strcmp(str1, car_wax);
          if (result == 0) {
            invoice_total += car_wax_price;
            printf("\nService 1: %s, $%d\n", car_wax, car_wax_price);
          } else {
            printf("\nService 1: No service\n");
          }
       }
    }
  }

  // Service 2:
  result = strcmp(str3, oil_change);
  if (result == 0) {
    invoice_total += oil_change_price;
    printf("Service 2: %s, $%d\n", oil_change, oil_change_price);
  } else {
    result = strcmp(str3, tire_rotation);
    if (result == 0) {
      invoice_total += tire_rotation_price;
      printf("Service 2: %s, $%d\n", tire_rotation, tire_rotation_price);
    } else {
       result = strcmp(str3, car_wash);
       if (result == 0) {
         invoice_total += car_wash_price;
         printf("Service 2: %s, $%d\n", car_wash, car_wash_price);
       } else {
          result = strcmp(str3, car_wax);
          if (result == 0) {
            invoice_total += car_wax_price;
            printf("Service 2: %s, $%d\n", car_wax, car_wax_price);
          } else {
            printf("Service 2: No service\n");
          }
       }
    }
  }

  // Invoice total
  printf("\nTotal: $%d\n", invoice_total);

  return 0;
}
