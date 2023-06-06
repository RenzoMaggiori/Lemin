/*
** EPITECH PROJECT, 2023
** lemin
** File description:
** main
*/

#include "my.h"
#include "lemin.h"

int main(int ac, char **av)
{
    if (ac != 1)
        return (84);
    info_t *info = parsing_file();
    room_t **rooms = init_rooms(info);

    print_output(info, rooms);
    return (0);
}
