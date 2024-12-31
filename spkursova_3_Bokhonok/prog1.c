#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int16_t AAAAAA, BBBBBB, XXXXXX, YYYYYY;
   printf("Enter AAAAAA:");
   scanf("%hd", &AAAAAA);
   printf("Enter BBBBBB:");
   scanf("%hd", &BBBBBB);
   printf("%d\n", AAAAAA + BBBBBB);
   printf("%d\n", AAAAAA - BBBBBB);
   printf("%d\n", AAAAAA * BBBBBB);
   printf("%d\n", AAAAAA / BBBBBB);
   printf("%d\n", AAAAAA % BBBBBB);
   XXXXXX = (AAAAAA - BBBBBB) * 10 + (AAAAAA + BBBBBB) / 10;
   YYYYYY = XXXXXX + (XXXXXX % 10);
   printf("%d\n", XXXXXX);
   printf("%d\n", YYYYYY);
   system("pause");
    return 0;
}
