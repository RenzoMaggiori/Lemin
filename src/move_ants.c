/*
** EPITECH PROJECT, 2022
** B-CPE-200-BAR-2-1-lemin-diana.andrades
** File description:
** move_ants.c
*/

#include "my.h"
#include "lemin.h"

void reverse_path(paths_t **path)
{
    paths_t *prev = NULL;
    paths_t *curr = *path;
    paths_t *next = NULL;

    while (curr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *path = prev;
}

void move_ant(room_t *dest, room_t *src, char **moves, int i)
{
    if (dest->nb_ants > 0 && !dest->end || src->nb_ants < 1)
        return;
    ant_t *tmp = src->ant->next;
    src->ant->next = dest->ant;
    dest->ant = src->ant;
    src->ant = tmp;
    dest->nb_ants += 1;
    src->nb_ants -= 1;
    add_info(moves, i, dest);
}

void add_info(char **moves, int i, room_t *dest)
{
    char *str = NULL;

    str = my_strmcat("P", my_int_to_str(dest->ant->id));
    str = my_strmcat(str, "-");
    str = my_strmcat(str, dest->name);
    str = my_strmcat(str, " ");
    moves[i] = my_strmcat(moves[i], str);
}

void move_ants(info_t **info, paths_t *path)
{
    reverse_path(&path);
    room_t *end = path->room;
    int i = 0;

    while (end->nb_ants != (*info)->nb_ants) {
        (*info)->moves = my_realloc_arr((*info)->moves, 1);
        for (paths_t *p = path; p->next; p = p->next) {
            move_ant(p->room, p->next->room, (*info)->moves, i);
        }
        i++;
    }
}
