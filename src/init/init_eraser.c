/*
** EPITECH PROJECT, 2023
** init eraser
** File description:
** eraser
*/

#include "mypaint.h"
#include "structs.h"
#include "macros.h"
#include <SFML/Graphics.h>
#include <stdlib.h>

button_t *init_eraser(void)
{
    button_t *result = malloc(sizeof(button_t));
    result->zone_clicked = is_zone_clicked;
    result->state = NONE;
    result->rect = sfRectangleShape_create();
    sfRectangleShape_setSize(result->rect, (sfVector2f){50, 50});
    sfRectangleShape_setPosition(result->rect, (sfVector2f){1200, 25});
    sfRectangleShape_setOutlineThickness(result->rect, BUTTON_THICKNESS);
    sfRectangleShape_setOutlineColor(result->rect, sfWhite);
    sfRectangleShape_setFillColor(result->rect, sfWhite);
    return result;
}
