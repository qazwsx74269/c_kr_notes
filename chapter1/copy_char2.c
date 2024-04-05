#include <stdio.h>

main() {
    int c, d;
    while(c = (d=getchar()) != EOF){
	printf("c=%d d=%c\n", c, d);
        putchar('A');
    }
}

