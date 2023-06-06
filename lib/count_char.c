/*
** EPITECH PROJECT, 2023
** minishell1
** File description:
** count_char
*/

int count_char(char *str, char c)
{
    int res = 0;
    int i = 0;

    while (str[i]) {
        if (c == str[i])
            res += 1;
        i++;
    }
    return (res);
}
