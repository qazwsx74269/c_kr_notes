#include <stdio.h>

int main()
{
    int space_count, tab_count, nextline_count;
    space_count = tab_count = nextline_count = 0;

    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            ++space_count;
        }
        if (c == '\t')
        {
            ++tab_count;
        }
        else if (c == '\n')
        {
            ++nextline_count;
        }
    }
    printf("%d %d %d", space_count, tab_count, nextline_count);
}