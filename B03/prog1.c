#include <stdio.h>
int main() {
int YYYYYY;
int XXXXXX;
int BBBBBB;
int AAAAAA;

printf("Enter AAAAAA: ");
scanf("%d", &AAAAAA);
printf("Enter BBBBBB: ");
scanf("%d", &BBBBBB);
printf("%d\n", (AAAAAA + BBBBBB));
printf("%d\n", (AAAAAA - BBBBBB));
printf("%d\n", (AAAAAA * BBBBBB));
printf("%d\n", (AAAAAA / BBBBBB));
printf("%d\n", (AAAAAA % BBBBBB));
XXXXXX = (((AAAAAA - BBBBBB) * 10) + ((AAAAAA + BBBBBB) / 10));
YYYYYY = (XXXXXX + (XXXXXX % 10));
printf("%d\n", XXXXXX);
printf("%d\n", YYYYYY);
return 0;
}
