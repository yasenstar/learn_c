#include <stdio.h>
/* �����븴�� to output, version 1 */
main()
{
    int c;

    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}
