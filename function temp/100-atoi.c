#include "main.h"

/**
 * _atoi - conv string to int
 * @s: input string
 * Return: int converted from string
 */
int _atoi(char *s)
{
    int x = 0;
    int sign = -1;
    int flag = 0;
    int conv = 0;

    while (*(s + x) != '\0')
    {
        if (*(s + x) == '-')
        {
            sign *= -1;
        }
        else if (*(s + x) >= '0' && *(s + x) <= '9')
        {
            conv *= 10;
            conv -= (*(s + x) - 48);
            flag = 1;
        }
        else if (flag == 1)
        {
            break;
        }
        x++;
    }
    conv = (conv * sign);
    return (conv);
}
