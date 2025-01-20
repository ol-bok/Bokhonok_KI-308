#include <stdio.h>
int main() {
int CCCCCC;
int BBBBBB;
int AAAAAA;

printf("Enter AAAAAA: ");
scanf("%d", &AAAAAA);
printf("Enter BBBBBB: ");
scanf("%d", &BBBBBB);
printf("Enter CCCCCC: ");
scanf("%d", &CCCCCC);
if ((AAAAAA < BBBBBB)) if ((AAAAAA < CCCCCC)) goto ABIGER;
else printf("%d\n", CCCCCC);
goto OUTOFI;
ABIGER:
printf("%d\n", AAAAAA);
goto OUTOFI;
if ((BBBBBB > CCCCCC)) printf("%d\n", CCCCCC);
else printf("%d\n", BBBBBB);
OUTOFI:
if (((AAAAAA == BBBBBB) && ((AAAAAA == CCCCCC) && (BBBBBB == CCCCCC)))) printf("%d\n", 1);
else printf("%d\n", 0);
if (((AAAAAA > 0) || ((BBBBBB > 0) || (CCCCCC > 0)))) printf("%d\n", -1);
else printf("%d\n", 0);
if ((AAAAAA > (BBBBBB + CCCCCC))) printf("%d\n", 10);
else printf("%d\n", 0);
return 0;
}
