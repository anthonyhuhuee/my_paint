/*
** EPITECH PROJECT, 2023
** analyse_events.c
** File description:
** analyse_events.c
*/

#include "mypaint.h"
#include "macros.h"
#include "structs.h"
#include <stdio.h>

void handle_clicks(all_object_t *paint, sfEvent event)
{
    paint->edit_menu->button->is_clicked(paint->edit_menu->button, MOUSE);
    paint->file_menu->button->is_clicked(paint->file_menu->button, MOUSE);
    paint->help_menu->button->is_clicked(paint->help_menu->button, MOUSE);
    paint->draw_zone->zone_clicked(paint->draw_zone, MOUSE);
    paint->eraser->zone_clicked(paint->eraser, MOUSE);
    paint->pencil->zone_clicked(paint->pencil, MOUSE);
}

void handle_mouse_movement(all_object_t *paint, sfMouseMoveEvent *mouse)
{
    paint->edit_menu->button->is_hover(paint->edit_menu->button, mouse);
    paint->file_menu->button->is_hover(paint->file_menu->button, mouse);
    paint->help_menu->button->is_hover(paint->help_menu->button, mouse);
}

void analyse_events(all_object_t *paint)
{
    sfEvent event;
    while (sfRenderWindow_pollEvent(paint->window, &event)) {
        switch (event.type) {
        case sfEvtMouseMoved:
            handle_mouse_movement(paint, &event.mouseMove);
            break;
        case sfEvtClosed:
            sfRenderWindow_close(paint->window);
            break;
        case sfEvtMouseButtonPressed:
            handle_clicks(paint, event);
            break;
        case sfEvtMouseButtonReleased:
            paint->draw_zone->state = RELEASED;
            break;
        default:
            break;
        }
    }
    change_all_colors(paint);
}
