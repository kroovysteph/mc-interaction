#include "minecraft.h"

char *s_concat(char x[], char y[])
{
    int nx = strlen(x);
    int ny = strlen(y) + 1;
    int n = nx + ny;
    char *a = malloc(n * sizeof(char));
    memcpy(a,      x, nx * sizeof(char));
    memcpy(a + nx, y, ny * sizeof(char));
    
    return a;
}

char *s_of_int(int i) {
    char buf[16];
    sprintf(buf, "%d", i);
    int n = strlen(buf) + 1;
    char *s = malloc(n);
    memcpy(s, buf, n);
    return s;
}