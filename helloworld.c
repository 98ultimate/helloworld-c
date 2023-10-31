#include <stdio.h>
int main() {
    unsigned long long int dx = 0x77E435B08;
    while (dx) putchar(0x726F6C6564574820 >> (((dx >>= 3) & 7) << 3) & 0xff);
}