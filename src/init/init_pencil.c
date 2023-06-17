/*
** EPITECH PROJECT, 2023
** init pencil
** File description:
** pencil
*/

#include "mypaint.h"
#include "structs.h"
#include "macros.h"
#include <SFML/Graphics.h>
#include <stdlib.h>

button_t *init_pencil(void)
{
    button_t *result = malloc(sizeof(button_t));
    result->zone_clicked = is_zone_clicked;
    result->state = NONE;
    result->rect = sfRectangleShape_create();
    sfRectangleShape_setSize(result->rect, (sfVector2f){50, 50});
    sfRectangleShape_setPosition(result->rect, (sfVector2f){1000, 25});
    sfRectangleShape_setOutlineThickness(result->rect, BUTTON_THICKNESS);
    sfRectangleShape_setOutlineColor(result->rect, sfRed);
    sfRectangleShape_setFillColor(result->rect, sfBlack);
    return result;
}
