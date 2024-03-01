#include <stdio.h>
int main(){

    int x = 9, y = 12, c = 0;
    int *px = &x, *py = &y, *pc = &c;

    printf("[%p] %d\n[%p] %d ", px, *px, py, *py);

    *pc = *px;
    *px = *py;
    *py = *pc;

    printf("\n[%p] %d\n[%p] %d ", px, *px, py, *py);

    return 0;
}