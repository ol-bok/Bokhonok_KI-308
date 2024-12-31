#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int16_t AAAAAA;
   int16_t BBBBBB;
   int16_t CCCCCC;
   printf("Enter AAAAAA:");
   scanf("%hd", &AAAAAA);
   printf("Enter BBBBBB:");
   scanf("%hd", &BBBBBB);
   printf("Enter CCCCCC:");
   scanf("%hd", &CCCCCC);
   if (AAAAAA > BBBBBB) 
   {
   if (AAAAAA > CCCCCC) 
   {
   goto Abigger;
   }
   else
   {
   printf("%d\n", CCCCCC);
   goto Outofif;
Abigger:
   printf("%d\n", AAAAAA);
   goto Outofif;
   }
   }
   if (BBBBBB < CCCCCC) 
   {
   printf("%d\n", CCCCCC);
   }
   else
   {
   printf("%d\n", BBBBBB);
   }
Outofif:
   if (((AAAAAA == BBBBBB && AAAAAA == CCCCCC) && BBBBBB == CCCCCC)) 
   {
   printf("%d\n", 1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if (((AAAAAA < 0 || BBBBBB < 0) || CCCCCC < 0)) 
   {
   printf("%d\n", (0 - 1));
   }
   else
   {
   printf("%d\n", 0);
   }
   if (!(AAAAAA < (BBBBBB + CCCCCC))) 
   {
   printf("%d\n", 10);
   }
   else
   {
   printf("%d\n", 0);
   }
   system("pause");
    return 0;
}
