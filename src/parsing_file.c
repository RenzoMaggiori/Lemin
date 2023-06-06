/*
** EPITECH PROJECT, 2023
** lemin
** File description:
** parsing_file
*/

#include "my.h"
#include "lemin.h"
#include <stdio.h>

info_t *init_info(void)
{
    info_t *info = malloc(sizeof(info_t));

    info->nb_ants = 0;
    info->rooms = NULL;
    info->tunnels = NULL;
    info->moves = NULL;
}

bool is_command(char *line)
{
    int len = my_strlen(line) - 1;

    line[len] = line[len] == '\n' ? '\0' : line[len];

    return (my_strcmp(line, START) || my_strcmp(line, END));
}

char *clean_comments(char *line)
{
    int end = 0;

    if (line[end] == '#')
        return (NULL);
    for (int i = 0; line[i] && line[i] != '#'; i++) {
        if (line[i] == ' ')
            continue;
        end = i;
    }
    line[end + 1] = '\0';
    return (line);
}

int get_type(char **line, int type)
{
    if (is_command(*line))
        return (1);
    *line = clean_comments(*line);
    if (*line == NULL)
        return (type);
    if (type == 0 && my_str_isnum(*line))
        type = 0;
    if (type == 0 && count_char(*line, ' ') == 2)
        type = 1;
    if (count_char(*line, '-') == 1)
        type = 2;
    return (type);
}

info_t *parsing_file(void)
{
    info_t *info = init_info();
    char *line = NULL;
    int size = 0;
    int type = 0;

    while (getline(&line, &size, stdin) > 0) {
        type = get_type(&line, type);
        if (!line) continue;
        if (type == 0)
            info->nb_ants = my_getnbr(line);
        if (type == 1)
            info->rooms = my_add_to_arr(info->rooms, line);
        if (type == 2)
            info->tunnels = my_add_to_arr(info->tunnels, line);
    }
    return (info);
}
