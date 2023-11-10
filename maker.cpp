#include <iostream>
#include "testlib.h"

using namespace std;

int main(int argc, char *argv[])
{
    registerGen(argc, argv, 1);

    const int n = 1000, Max = 1e9;
    cout << n << '\n';
    for (int i = 1; i <= n; i++)
        cout << rnd.next(Max) + 1 << ' ' <<  rnd.next(Max) + 1 << '\n';

    return 0;
}