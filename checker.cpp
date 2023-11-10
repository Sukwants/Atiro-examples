#include "testlib.h"

int main(int argc, char *argv[])
{
    registerTestlibCmd(argc, argv);

    int n = inf.readInt();
    for (int i = 1; i <= n; i++)
    {
        int x = ouf.readInt(), y = ans.readInt();
        if (x != y) quitf(_wa, "on the %d-th answer", i);
    }

    quitf(_ok, "");
}