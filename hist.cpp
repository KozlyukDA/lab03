#include "hist.h"
void
find_minmax(vector<double> numbers, double& min, double& max)
{
    if (numbers.size() != 0)
    {
        min = numbers[0];
        max = numbers[0];
        for (double number : numbers)
        {
            if (max < number)
                max = number;
            if (min > number)
                min = number;
        }
    }
}
