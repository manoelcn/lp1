#include "primo.h"

int primo(int n, int i)
{
    if (n == 0 || n == 1)
    {
        return false;
    }
    if (i * i > n)
    {
        return true;
    }
    if (n % i == 0)
    {
        return false;
    }
    return primo(n, i + 1);
}