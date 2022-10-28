#include <stdio.h>

void modify(int **p)
{
     int **q;
     q = p;
    printf("%x\n", p);
    *q = *q + 3;
    return;

}
int main()
{
     int j = 0x3ed2cf80; // the address of j is 0x70f0
     printf("%x\n", &j);
     int *qPtr;          // the address of qPtr is 0x5448
     printf("%x\n", qPtr);
     qPtr = &j;
     printf("%x\n", qPtr);
     modify(&qPtr);
     printf("%x\n", qPtr);
     j = 0;
    return 0;
}