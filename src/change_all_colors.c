/*
** EPITECH PROJECT, 2023
** change colors
** File description:
** change colors
*/

#include "macros.h"
#include "structs.h"
#include <stdio.h>

void change_colors_button(t_gui_object *button)
{
    switch (button->state) {
    case HOVER:
        sfRectangleShape_setFillColor(button->rect, sfCyan);
        break;
    case PRESSED:
        sfRectangleShape_setFillColor(button->rect, sfRed);
        break;
    default:
        sfRectangleShape_setFillColor(button->rect, sfWhite);
        break;
    }
}

void change_all_colors(all_object_t *paint)
{
    change_colors_button(paint->edit_menu->button);
    change_colors_button(paint->file_menu->button);
    change_colors_button(paint->help_menu->button);
    return;
}
