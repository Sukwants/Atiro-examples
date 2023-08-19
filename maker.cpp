#include <bits/stdc++.h>
#include "testlib.h"

using namespace std;

int main(int argc, char *argv[])
{
    registerGen(argc, argv, 1);

    const int n = 1e4, Max = 1e9;
    printf("%d\n", n);
    for (int i = 1; i <= n; i++) printf("%d %d\n", rnd.next(Max) + 1, rnd.next(Max) + 1);

    return 0;
}