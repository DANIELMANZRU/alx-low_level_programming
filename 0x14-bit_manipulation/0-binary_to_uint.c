#include "main.h"

/**
 * convert_binary_to_uint - Converts a binary string to an unsigned integer.
 * @binary_str: The input string containing the binary number.
 *
 * Return: The converted unsigned integer.
 */
unsigned int convert_binary_to_uint(const char *binary_str)
{
    int index;
    unsigned int decimal_val = 0;

    if (!binary_str)
        return 0;

    for (index = 0; binary_str[index]; index++)
    {
        if (binary_str[index] < '0' || binary_str[index] > '1')
            return 0;
        decimal_val = 2 * decimal_val + (binary_str[index] - '0');
    }

    return decimal_val;
}
