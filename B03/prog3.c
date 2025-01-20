#include <stdio.h>
int main() {
int JJJJJJ;
int IIIIII;
int XXXXXX;
int BBBBBB;
int AAAAAA;

printf("Enter AAAAAA: ");
scanf("%d", &AAAAAA);
printf("Enter BBBBBB: ");
scanf("%d", &BBBBBB);
for(
XXXXXX = AAAAAA;
XXXXXX <= BBBBBB;
++XXXXXX
) printf("%d\n", (XXXXXX * XXXXXX));
XXXXXX = 0;
for(
IIIIII = 1;
IIIIII <= AAAAAA;
++IIIIII
) for(
JJJJJJ = 1;
JJJJJJ <= BBBBBB;
++JJJJJJ
) XXXXXX = (XXXXXX + 1);
printf("%d\n", XXXXXX);
return 0;
}
