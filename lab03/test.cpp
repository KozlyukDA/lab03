#include "hist.h"

#include <cassert>

void
test_positive()
{
    double min = 0;
    double max = 0;
    find_minmax({1, 2, 3}, min, max);
    assert(min == 1);
    assert(max == 3);
}
void test_negative()
{
    double min = 0;
    double max = 0;
    find_minmax({-1, -2, -3}, min, max);
    assert (min == -3);
    assert (max == -1);
}
void test_odin()
{
    double min = 0;
    double max = 0;
    find_minmax({5}, min, max);
    assert (min == 5);
    assert (max == 5);
}
void test_pustoy()
{
    double min = 0;
    double max = 0;
}
int
main()
{
    test_positive();
    test_negative();
    test_odin();
    test_pustoy();
}
