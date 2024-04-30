#include <stdio.h>

#define IN 1
#define OUT 0

int main(int argc, char const *argv[])
{
    int nc, nw, nl, c, state, lastState;
    nc = nw = nl = 0;
    lastState = state = OUT;

    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
        {
            ++nl;
        }
        
        if (c == ' ' || c == '\t' || c == '\n')
        {
            lastState = state;
            state = OUT;
        }
        else if (state == OUT)
        {
            lastState = state;
            state = IN;
            ++nw;
        }
        if (state == IN)
        {
            putchar(c);
        }
        if (lastState == IN && state == OUT)
        {
            putchar('\n');
        }
        
    }
    return 0;
}
