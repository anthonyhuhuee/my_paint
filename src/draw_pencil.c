/*
** EPITECH PROJECT, 2023
** draw
** File description:
** draw
*/

#include "mypaint.h"
#include "macros.h"
#include "structs.h"
#include <stdlib.h>

void draw_pencil(button_t *draw_zone, all_object_t *paint)
{
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(paint->window);
    sfVector2f curr_pos;
    curr_pos = sfRenderWindow_mapPixelToCoords(paint->window, mouse_pos, NULL);
    if (draw_zone->state == PRESSED) {
        sfFloatRect rect = sfRectangleShape_getGlobalBounds(draw_zone->rect);
        if (sfFloatRect_contains(&rect, MOUSE_X - 20, MOUSE_Y - 20) == 1) {
            sfVertexArray* vertexArray = sfVertexArray_create();
            sfVertex vert1 = {{MOUSE_X - 20, MOUSE_Y - 20}, COLOR_PEN, {0, 0}};
            sfVertex vert2 = {{MOUSE_X, MOUSE_Y - 20}, COLOR_PEN, {1, 0}};
            sfVertex vert3 = {{MOUSE_X, MOUSE_Y}, COLOR_PEN, {1, 1}};
            sfVertex vert4 = {{MOUSE_X - 20, MOUSE_Y}, COLOR_PEN, {0, 1}};
            sfVertexArray_append(vertexArray, vert1);
            sfVertexArray_append(vertexArray, vert2);
            sfVertexArray_append(vertexArray, vert3);
            sfVertexArray_append(vertexArray, vert4);
            sfVertexArray_setPrimitiveType(vertexArray, sfQuads);
            sfRenderWindow_drawVertexArray(paint->window, vertexArray, NULL);
        }
        return;
    }
}
