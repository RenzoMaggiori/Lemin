/*
** EPITECH PROJECT, 2022
** CPool_06
** File description:
** my_strncmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    for (int i = 0; i < n; i++) {
        if (s1[i] != s2[i])
            return (0);
    }
    return (1);
}
