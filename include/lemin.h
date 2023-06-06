/*
** EPITECH PROJECT, 2023
** lemin
** File description:
** lemin
*/

#ifndef LEMIN_H_
    #define LEMIN_H_

    #define START   "##start"
    #define END     "##end"
    #define ANTS    "#number_of_ants\n"
    #define ROOMS   "#rooms\n"
    #define TUNNELS "#tunnels\n"
    #define MOVES   "#moves\n"

    typedef struct path_s {
        struct room_s *room;
        struct path_s *next;
    } paths_t;

    typedef struct ant_s {
        int id;
        struct ant_s *next;
    } ant_t;

    typedef struct room_s {
        char *name;
        int x;
        int y;
        int weight;
        bool start;
        bool end;
        int nb_ants;
        ant_t *ant;
        paths_t *path;
    } room_t;

    typedef struct info_s {
        int *nb_ants;
        char **rooms;
        char **tunnels;
        char **moves;
    } info_t;

    info_t *parsing_file(void);
    ant_t *init_ants(int nb_ants);
    room_t **init_rooms(info_t *info);
    room_t *fill_rooms(room_t *room);
    void move_ants(info_t **info, paths_t *path);
    void lemin(info_t *info, room_t **rooms);
    int error_handling(info_t *info, room_t *rooms);
    void print_output(info_t *info, room_t *rooms);

#endif /* !LEMIN_H_ */
