#include <iostream>
#include "testlib.h"

using namespace std;

int main(int argc, char **argv)
{
    registerInteraction(argc, argv);

    int n = inf.readInt();
    for (int i = 1; i <= n; i++)
    {
        int a = inf.readInt();
        int b = inf.readInt();
        cout << a << " " << b << endl;
        tout << ouf.readInt() << endl;
    }

    quitf(_ok, "%d queries processed", n);
}
