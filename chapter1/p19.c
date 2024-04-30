#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            putchar(' ');
            while ((c = getchar()) == ' ')
                ;
            if (c != EOF)
            {
                putchar(c);
            }
            else
            {
                break;
            }
        }
        else
        {
            putchar(c);
        }
    }
    return 0;
}
