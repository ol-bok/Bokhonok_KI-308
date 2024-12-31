#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int16_t AAAAAA;
   int16_t AAAAA2;
   int16_t BBBBBB;
   int16_t XXXXXX;
   int16_t CCCCC1;
   int16_t CCCCC2;
   printf("Enter AAAAAA:");
   scanf("%hd", &AAAAAA);
   printf("Enter BBBBBB:");
   scanf("%hd", &BBBBBB);
   for (int16_t AAAAA2 = AAAAAA; AAAAA2 <= BBBBBB; AAAAA2++)
   printf("%d\n", (AAAAA2 * AAAAA2));
   for (int16_t AAAAA2 = BBBBBB; AAAAA2 <= AAAAAA; AAAAA2++)
   printf("%d\n", (AAAAA2 * AAAAA2));
   XXXXXX = 0;
   CCCCC1 = 0;
   while (CCCCC1 < AAAAAA)
   {
   {
   CCCCC2 = 0;
   while (CCCCC2 < BBBBBB)
   {
   {
   XXXXXX = (XXXXXX + 1);
   CCCCC2 = (CCCCC2 + 1);
   }
   }
   CCCCC1 = (CCCCC1 + 1);
   }
   }
   printf("%d\n", XXXXXX);
   XXXXXX = 0;
   CCCCC1 = 1;
   do
   {
   CCCCC2 = 1;
   do
   {
   XXXXXX = (XXXXXX + 1);
   CCCCC2 = (CCCCC2 + 1);
   }
   while (!(CCCCC2 > BBBBBB));
   CCCCC1 = (CCCCC1 + 1);
   }
   while (!(CCCCC1 > AAAAAA));
   printf("%d\n", XXXXXX);
   system("pause");
    return 0;
}
