/*
** EPITECH PROJECT, 2023
** function
** File description:
** function
*/

#include "mypaint.h"
#include "macros.h"
#include "structs.h"

int mypaint(void)
{
    all_object_t *paint = init_all_objects();
    sfRenderWindow_clear(WINDOW, sfBlack);
    sfRenderWindow_drawRectangleShape(WINDOW, paint->draw_zone->rect, NULL);
    while (sfRenderWindow_isOpen(WINDOW)) {
        before_action_draw(paint);
        analyse_events(paint);
        draw_pencil(paint->draw_zone, paint);
        after_action_draw(paint);
    }
    free_all_objects(paint);
    return SUCCESS;
}
