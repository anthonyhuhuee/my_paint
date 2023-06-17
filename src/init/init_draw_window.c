/*
** EPITECH PROJECT, 2023
** init draw window
** File description:
** init draw window
*/

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

button_t *init_draw_window(void)
{
    button_t *result = malloc(sizeof(button_t));
    result->rect = sfRectangleShape_create();
    sfRectangleShape_setSize(result->rect, (sfVector2f){1500, 600});
    sfRectangleShape_setFillColor(result->rect, sfWhite);
    sfRectangleShape_setPosition(result->rect, (sfVector2f){200, 200});
    result->state = NONE;
    result->zone_clicked = is_zone_clicked;
    return result;
}
