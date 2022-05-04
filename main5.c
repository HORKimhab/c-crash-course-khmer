#include <stdio.h>
#include <stdlib.h>

int main()
{
   // C User Input
   /*
    // Syntax
    dataType var;
    print("Msg for user's input user");
    scanf("format_specifier", &var);
    printf("format_specifier", var);
   */

   /*
    ID: fdb-01
    Product Name: Freedom Burger Beef
    Price: 2.50 $
    Size: M
    More: Freedom Burger Cambodia
    ----- Hey Crush ----


    // Fix Error with Ref: https://stackoverflow.com/questions/29122166/c-scanf-for-char-not-working-as-expected
   */
   char id[12];
   char product_name[52];
   float pro_price;
   char size;
   char more[52];
   char fun_word[52];
   printf("Enter id of product: ");
   scanf("%s", &id);

   printf("Enter product name: ");
   scanf("%s", &product_name);

   printf("Enter size: ");
   scanf(" %c", &size);

   printf("Enter more: ");
   scanf(" %s", &more);

   printf("Enter funny word: ");
   scanf("%s", &fun_word);
   // Output ID of product
   printf("\nID: %s\n", id);
   printf("Product Name: %s\n", product_name);
   printf("Size: %c\n", size);
   printf("More: %s\n", more);
   printf("---%s----", fun_word);

    return 0;
}
