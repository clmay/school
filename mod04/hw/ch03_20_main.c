#include <stdio.h>
#include <string.h>

int main(void) {
   int result;
   char str1[25] = "";
   char str2[25] = "";
   
   char oil_change[] = "Oil change";
   char tire_rotation[] = "Tire rotation";
   char car_wash[] = "Car wash";
   
   printf("Enter desired auto service:\n");
   scanf("%s %s", str1, str2);
   strcat(strcat(str1, " "), str2);
   printf("You entered: %s\n", str1);
   
   result = strcmp(str1, oil_change);
   if (result == 0) {
      printf("Cost of oil change: $35\n");
   } else {
      result = strcmp(str1, tire_rotation);
      if (result == 0) {
         printf("Cost of tire rotation: $19\n");
      } else {
         result = strcmp(str1, car_wash);
         if (result == 0) {
            printf("Cost of car wash: $7\n");
         } else {
            printf("Error: Requested service is not recognized\n");
         }
      }
   }
   
   return 0;
}