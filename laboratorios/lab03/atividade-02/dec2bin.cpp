#include "dec2bin.h"

int dec2bin(int decimal)
{
    if (decimal / 2 == 0)
    {
        return decimal % 2;
    }
    return (dec2bin(decimal / 2) * 10) + decimal % 2;
}