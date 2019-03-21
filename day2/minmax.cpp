#include "minmax.h"

int MinMax::max(int n1, int n2, int n3)
{
    int max = (n1 > n2) ? n1 : n2;
    return (max > n3) ? max : n3;
}

int MinMax::min(int n1, int n2, int n3)
{
    int min = (n1 < n2) ? n1 : n2;
    return (min < n3) ? min : n3;
}