/*
** EPITECH PROJECT, 2023
** all draw
** File description:
** all draw
*/

#include "mypaint.h"
#include "macros.h"
#include "structs.h"

void draw_button(sfRenderWindow *window, t_gui_object *button)
{
    sfRenderWindow_drawRectangleShape(window, button->rect, NULL);
    sfRenderWindow_drawText(window, button->text, NULL);
}

void before_action_draw(all_object_t *paint)
{
    sfRenderWindow_drawRectangleShape(WINDOW, paint->eraser->rect, NULL);
    sfRenderWindow_drawRectangleShape(WINDOW, paint->pencil->rect, NULL);
    draw_button(WINDOW, paint->edit_menu->button);
    draw_button(WINDOW, paint->help_menu->button);
    draw_button(WINDOW, paint->file_menu->button);
}

void check_tools_actions(all_object_t *paint)
{
    if (paint->eraser->state == PRESSED) {
        paint->pencil_color = sfWhite;
        sfRectangleShape_setOutlineColor(paint->eraser->rect, sfRed);
        sfRectangleShape_setOutlineColor(paint->pencil->rect, sfWhite);
    }
    if (paint->pencil->state == PRESSED) {
        paint->pencil_color = sfBlack;
        sfRectangleShape_setOutlineColor(paint->pencil->rect, sfRed);
        sfRectangleShape_setOutlineColor(paint->eraser->rect, sfBlack);
    }
}

void after_action_draw(all_object_t *paint)
{
    if (paint->file_menu->button->state == PRESSED)
        draw_button(WINDOW, paint->file_menu->options->option);
    check_tools_actions(paint);
    sfRenderWindow_display(WINDOW);
}
