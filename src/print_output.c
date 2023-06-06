/*
** EPITECH PROJECT, 2023
** lemin
** File description:
** print_output
*/

#include "my.h"
#include "lemin.h"

void put_string_array(char **array)
{
    int a = 0;

    if (!array)
        return;
    while (array[a]) {
        my_printf("%s\n", array[a]);
        a++;
    }
}

void print_output(info_t *info, room_t *rooms)
{
    my_printf("%s%d\n", ANTS, info->nb_ants);
    my_putstr(ROOMS);
    put_string_array(info->rooms);
    my_putstr(TUNNELS);
    put_string_array(info->tunnels);
    my_putstr(MOVES);
    if (error_handling(info, rooms) != 84) {
        lemin(info, rooms);
        put_string_array(info->moves);
    }
}
