/*
** EPITECH PROJECT, 2022
** CPool_09
** File description:
** myh
*/

#ifndef MY_H_
    #define MY_H_

    #include <stddef.h>
    #include <unistd.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <stdbool.h>

    void my_putchar(char c);
    int my_isneg(int nb);
    int my_put_nbr(long nb);
    void my_swap(int *a, int *b);
    int my_putstr(char const *str);
    int my_strlen(char const *str);
    int my_getnbr(char const *str);
    void my_sort_int_array(int *tab, int size);
    int my_compute_power_rec(int nb, int power);
    int my_compute_square_root(int nb);
    int my_is_prime(int nb);
    int my_find_prime_sup(int nb);
    char *my_strcpy(char *dest, char const *src);
    char *my_strncpy(char *dest, char const *src, int n);
    char *my_revstr(char *str);
    char *my_strstr(char *str, char const *to_find);
    int my_strcmp(char const *s1, char const *s2);
    int my_strncmp(char const *s1, char const *s2, int n);
    char *my_strupcase(char *str);
    char *my_strlowcase(char *str);
    char *my_strcapitalize(char *str);
    int my_char_isalpha(char c);
    int my_str_isalpha(char const *str);
    int my_str_isnum(char const *str);
    int my_str_islower(char const *str);
    int my_str_isupper(char const *str);
    int my_str_isprintable(char const *str);
    int my_showstr(char const *str);
    int my_showmem(char const *str, int size);
    char *my_strcat(char *dest, char const *src);
    char *my_strmcat(char const *dest, char const *src);
    char *my_strncat(char *dest, char const *src, int nb);
    char *my_strdup(char const *src);
    char **my_str_to_array(char *str, char sep);
    char **my_str_to_array_num(char *str, char sep, int num);
    char *my_strdup_from(char const *src, int i);
    int	my_int_len(int nb);
    int my_nbrlen(double nb);
    char *my_int_to_str(int nbr);
    int my_arr_len(char **arr);
    char *open_file(char *file);
    int my_printf(const char *format, ...);
    char *my_arr_to_str(char **arr_str, char del);
    char *my_strmalloc(int size);
    void free_arr(char **arr);
    int my_puterror(char const *str);
    bool my_char_isalphanum(char c);
    bool my_str_isalphanum(char const *str);
    char **my_realloc_arr(char **arr, int size);
    char **my_add_to_arr(char **arr, char *str);
    int count_char(char *str, char c);

#endif
