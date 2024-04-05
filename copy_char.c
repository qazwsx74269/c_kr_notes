#include <stdio.h>

main() {
    int c;
    while((c=getchar()) != EOF){
	printf("c=%c\n", c);
        putchar(c);
    }
}

