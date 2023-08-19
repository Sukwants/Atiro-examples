#include <cstdio>

int main()
{
    int a, b;
    while (scanf("%d%d", &a, &b) != EOF)
    {
        printf("%d\n", b + a);
        fflush(stdout);
    }
    return 0;
}