/*
** EPITECH PROJECT, 2023
** is_clicked.c
** File description:
** is_clicked.c
*/

#include "structs.h"
#include "SFML/Graphics.h"

void is_button_clicked(t_gui_object *button, sfMouseButtonEvent *mouse)
{
    sfFloatRect rect = sfRectangleShape_getGlobalBounds(button->rect);
    if (sfFloatRect_contains(&rect, mouse->x, mouse->y) == sfTrue) {
        button->state = PRESSED;
    } else {
        button->state = RELEASED;
    }
}

void is_zone_clicked(button_t *draw_zone, sfMouseButtonEvent *mouse)
{
    sfFloatRect rect = sfRectangleShape_getGlobalBounds(draw_zone->rect);
    if (sfFloatRect_contains(&rect, mouse->x, mouse->y) == sfTrue) {
        draw_zone->state = PRESSED;
    } else {
        draw_zone->state = RELEASED;
    }
}
