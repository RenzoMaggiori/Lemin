/*
** EPITECH PROJECT, 2023
** lemin
** File description:
** create_rooms
*/

#include "my.h"
#include "lemin.h"

room_t *create_room(char *info, bool start, bool end)
{
    room_t *room = malloc(sizeof(room_t));
    char **room_info = my_str_to_array(info, ' ');

    room->name = my_strdup(room_info[0]);
    room->x = my_getnbr(room_info[1]);
    room->y = my_getnbr(room_info[2]);
    room->start = start;
    room->end = end;
    room->ant = NULL;
    room->path = NULL;
    room->weight = -1;
    room->nb_ants = 0;
    room->ant = NULL;
    free_arr(room_info);
    return (room);
}

void add_path(room_t *room1, room_t *room2)
{
    paths_t *path1 = malloc(sizeof(paths_t));
    paths_t *path2 = malloc(sizeof(paths_t));

    path1->room = room2;
    path1->next = room1->path;
    room1->path = path1;
    path2->room = room1;
    path2->next = room2->path;
    room2->path = path2;
}

void create_connections(room_t **rooms, char **tunnels)
{
    char **tunnel_info = NULL;
    room_t *r1 = NULL, *r2 = NULL;

    for (int i = 0; tunnels && tunnels[i]; i++) {
        tunnel_info = my_str_to_array(tunnels[i], '-');
        for (int r = 0; rooms[r]; r++) {
            r1 = my_strcmp(rooms[r]->name, tunnel_info[0]) ? rooms[r] : r1;
            r2 = my_strcmp(rooms[r]->name, tunnel_info[1]) ? rooms[r] : r2;
        }
        add_path(r1, r2);
        free_arr(tunnel_info);
    }
}

room_t **init_rooms(info_t *info)
{
    room_t **rooms;
    char **room_info = NULL;
    bool start = false, end = false;
    int r = 0;
    if (info->rooms)
        rooms = malloc(sizeof(room_t *) * (my_arr_len(info->rooms) - 1));
    for (int i = 0; info->rooms && info->rooms[i]; i++) {
        if (my_strcmp(info->rooms[i], START)) {
            start = true; continue;
        }
        if (my_strcmp(info->rooms[i], END)) {
            end = true; continue;
        }
        rooms[r] = create_room(info->rooms[i], start, end);
        start = false, end = false;
        r++;
    } if (info->rooms) {
        rooms[r] = NULL;
        create_connections(rooms, info->tunnels);
    } return (rooms);
}
