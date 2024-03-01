#include <stdio.h>
int main(){

    int x = 9, y = 12, resp;
    int *px = NULL, *py = NULL;

    px = &x;
    py = &y;
    resp = *px + *py;
    printf("[%p]: %d", &resp, resp);

    return 0;
}