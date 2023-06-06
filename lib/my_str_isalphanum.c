/*
** EPITECH PROJECT, 2023
** minishell1
** File description:
** my_str_isalphanum
*/

#include "my.h"

bool my_char_isalphanum(char c)
{
    if (c >= 'a' && c <= 'z')
        return (true);
    if (c >= 'A' && c <= 'Z')
        return (true);
    if (c >= '0' && c <= '9')
        return (true);
    if (c == '_')
        return (true);
    return (false);
}

bool my_str_isalphanum(char const *str)
{
    int i = 0;

    if (str == NULL)
        return (1);
    while (str[i] != '\0') {
        if (!my_char_isalphanum(str[i]))
            return (false);
        i++;
    }
    return (true);
}
