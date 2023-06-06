/*
** EPITECH PROJECT, 2022
** lemin
** File description:
** error_handling.c
*/

#include "my.h"
#include "lemin.h"

int error_handling(info_t *info, room_t *rooms)
{
    int start = 0;
    int end = 0;

    if (info->nb_ants < 1)
        return 84;
    if (!info->tunnels || !info->rooms)
        return 84;
    for (int i = 0; info->rooms[i]; i++) {
        if (my_strcmp(info->rooms[i], START))
            start += 1;
        if (my_strcmp(info->rooms[i], END))
            end += 1;
    }
    if (start != 1 || end != 1)
        return 84;
    return 0;
}
