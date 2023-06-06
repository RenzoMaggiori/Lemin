/*
** EPITECH PROJECT, 2022
** CPool_06
** File description:
** my_strcmp
*/

#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    if (my_strlen(s1) != my_strlen(s2))
        return (0);
    while (s1[i] && s2[i]) {
        if (s1[i] != s2[i])
            return (0);
        i++;
    }
    return (1);
}
