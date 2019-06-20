#include <stdio.h>

int main(void) {
   int arrowBaseHeight;
   int arrowBaseWidth = 0;
   int arrowHeadWidth = 0;
   
   printf("Enter arrow base height:\n");
   scanf("%d", &arrowBaseHeight);
   printf("Enter arrow base width:\n");
   scanf("%d", &arrowBaseWidth);
   
   while (arrowHeadWidth <= arrowBaseWidth) {
      
      printf("Enter arrow head width:\n");
      scanf("%d", &arrowHeadWidth);
   }
   
   printf("\n");
   
   for (int i = 0; i < arrowBaseHeight; i++) {
      for (int j = 0; j < arrowBaseWidth; j++) {
         printf("*");
      }
      printf("\n");
   }
   
   for (int i = arrowHeadWidth; i > 0; i--) {
      for (int j = i; j > 0; j--) {
         printf("*");
      }
      printf("\n");
   }
   
   return 0;
}