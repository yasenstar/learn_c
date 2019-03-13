#include <stdio.h>
int main()
    {
        int max_num(int x, int y);
        int a, b, c;
        scanf("%d,%d", &a, &b);
        c = max_num(a,b);
        printf("max=%d\n",c);
        return 0;
    }