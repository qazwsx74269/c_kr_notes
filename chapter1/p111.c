#include <stdio.h>

#define IN 0
#define OUT 1

int main(int argc, char const *argv[])
{
    int nc, nw, nl, c, state;
    nc = nw = nl = 0;
    state = OUT;

    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
        {
            ++nl;
        }
        
        if (c == ' ' || c == '\t' || c == '\n')
        {
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n", nc, nl, nw);
    return 0;
}
