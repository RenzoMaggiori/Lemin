/*
** EPITECH PROJECT, 2023
** lemin
** File description:
** lemin
*/

#include "my.h"
#include "lemin.h"

paths_t *add_to_path(paths_t *path, room_t *room)
{
    paths_t *new_path = malloc(sizeof(paths_t));

    new_path->room = room;
    new_path->next = path;
    return (new_path);
}

room_t *get_back_room(room_t *room)
{
    room_t *next_room = room->path->room;

    for (paths_t *p = room->path; p; p = p->next) {
        if (p->room->weight < next_room->weight)
            next_room = p->room;
    }
    return (next_room);
}

room_t *get_start_room(room_t **rooms, int nb_ants)
{
    for (int i = 0; rooms[i]; i++)
        if (rooms[i]->start) {
            rooms[i]->ant = init_ants(nb_ants);
            return (rooms[i]);
        }
    return (NULL);
}

room_t *get_end_room(room_t **rooms)
{
    for (int i = 0; rooms[i]; i++)
        if (rooms[i]->end) {
            return (rooms[i]);
        }
    return (NULL);
}

void lemin(info_t *info, room_t **rooms)
{
    room_t *end = get_end_room(rooms);
    room_t *start = get_start_room(rooms, info->nb_ants);
    start->weight = 0;
    start->nb_ants = info->nb_ants;
    fill_rooms(start);
    paths_t *path = NULL;

    path = add_to_path(path, end);
    while (!path->room->start) {
        path = add_to_path(path, get_back_room(path->room));
    }
    move_ants(&info, path);
}
