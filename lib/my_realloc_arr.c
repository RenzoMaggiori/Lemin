/*
** EPITECH PROJECT, 2023
** minishell1
** File description:
** my_realloc_arr
*/

#include "my.h"

char **my_realloc_arr(char **arr, int size)
{
    int len = my_arr_len(arr);
    char **res = malloc(sizeof(char *) * (len + size + 1));

    for (int i = 0; i < len && i < len + size; i++) {
        res[i] = my_strdup(arr[i]);
        free(arr[i]);
    }
    if (size > 0)
        res[len] = NULL;
    res[len + size] = NULL;
    free(arr);
    return (res);
}

char **my_add_to_arr(char **arr, char *str)
{
    int len = my_arr_len(arr);
    char **res = malloc(sizeof(char *) * (len + 2));

    for (int i = 0; i < len; i++) {
        res[i] = my_strdup(arr[i]);
        free(arr[i]);
    }
    res[len] = my_strdup(str);
    res[len + 1] = NULL;
    free(arr);
    return (res);
}
