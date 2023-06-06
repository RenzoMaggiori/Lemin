/*
** EPITECH PROJECT, 2022
** lemin
** File description:
** fill_rooms.c
*/

#include "my.h"
#include "lemin.h"

room_t *fill_rooms(room_t *room)
{
    room_t *end = NULL;

    for (paths_t *p = room->path; p; p = p->next) {
        if (p->room->weight == -1 || p->room->weight > room->weight + 1)
            p->room->weight = room->weight + 1;
    }
    for (paths_t *p = room->path; p; p = p->next) {
        if (p->room->weight == room->weight + 1)
            fill_rooms(p->room);
    }
}
