#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
    int i;
    unsigned int dec_val = 0;

    if (!b)
        return (0);

    for (i = 0; b[i]; i++)
    {
        if (b[i] != '0' && b[i] != '1') // Modified condition to check if character is not '0' or '1'
            return (0);
        dec_val = dec_val * 2 + (b[i] - '0'); // Modified calculation for decimal value
    }

    return (dec_val);
}
