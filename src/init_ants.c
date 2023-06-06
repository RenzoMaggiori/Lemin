/*
** EPITECH PROJECT, 2023
** lemin
** File description:
** init_ants
*/

#include "my.h"
#include "lemin.h"

ant_t *init_ants(int nb_ants)
{
    ant_t *ants = NULL;
    ant_t *new = NULL;

    for (; nb_ants; nb_ants -= 1) {
        new = malloc(sizeof(ant_t));
        new->id = nb_ants;
        new->next = ants;
        ants = new;
    }
    return (ants);
}
