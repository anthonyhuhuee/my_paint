/*
** EPITECH PROJECT, 2023
** free_all_objects.c
** File description:
** free_all_objects.c
*/

#include "structs.h"
#include <stdlib.h>

void free_drawings(all_object_t *paint)
{
    sfRectangleShape_destroy(paint->draw_zone->rect);
    free(paint->draw_zone);
    sfRectangleShape_destroy(paint->eraser->rect);
    free(paint->eraser);
    sfRectangleShape_destroy(paint->pencil->rect);
    free(paint->pencil);
}

void free_all_objects(all_object_t *paint)
{
    sfRectangleShape_destroy(paint->edit_menu->button->rect);
    sfFont_destroy(paint->edit_menu->button->font);
    sfText_destroy(paint->edit_menu->button->text);
    free(paint->edit_menu->button);
    sfRectangleShape_destroy(paint->file_menu->button->rect);
    sfFont_destroy(paint->file_menu->button->font);
    sfText_destroy(paint->file_menu->button->text);
    free(paint->file_menu->button);
    sfRectangleShape_destroy(paint->help_menu->button->rect);
    sfFont_destroy(paint->help_menu->button->font);
    sfText_destroy(paint->help_menu->button->text);
    free_drawings(paint);
    sfRenderWindow_destroy(paint->window);
    free(paint->help_menu->button);
    free(paint->edit_menu);
    free(paint->help_menu);
    free(paint->file_menu);
    free(paint);
}
