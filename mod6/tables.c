/*
 * =====================================================================================
 *
 *       Filename:  tables.c
 *
 *    Description:  Display multiplication tables
 *
 *        Version:  1.0
 *        Created:  02/12/2019 08:39:17 AM
 *       Revision:  none
 *       Compiler:  gcc tables.c -o tables.out
 *
 *         Author:  Chase May (), chasemay@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */

 #include <stdio.h>

 // Constants

 // Function Prototypes

 // Main Function
 int main() {
   int table_size = 10;

   int tables[table_size][table_size];

   for (int i = 1; i <= table_size; i++) {
     for (int j = 1; j <= table_size; j++) {
       printf("%3d\t", (i * j));
       tables[i - 1][j - 1] = (i * j);
     }
     printf("\n");
   }

   printf("1 * 6 = %d", tables[0][5]);

   return 0;
 }
 // Function Definitions
