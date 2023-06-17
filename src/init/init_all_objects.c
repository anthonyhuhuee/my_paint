/*
** EPITECH PROJECT, 2023
** init_all_objects.c
** File description:
** init_all_objects.c
*/

#include "mypaint.h"
#include "structs.h"
#include "macros.h"
#include <SFML/Graphics.h>
#include <stdlib.h>

all_object_t *init_all_objects(void)
{
    all_object_t *result = malloc(sizeof(all_object_t));
    result->window = init_window_object();
    result->edit_menu = init_edit_menu();
    result->file_menu = init_file_menu();
    result->help_menu = init_help_menu();
    result->draw_zone = init_draw_window();
    result->eraser = init_eraser();
    result->pencil = init_pencil();
    result->pencil_color = sfBlack;
    return result;
}
