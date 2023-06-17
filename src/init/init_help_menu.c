/*
** EPITECH PROJECT, 2023
** init_help_menu.c
** File description:
** init_help_menu.c
*/

#include "macros.h"
#include "structs.h"
#include "mypaint.h"
#include <stdlib.h>

sfRectangleShape *init_help_button_rect(void)
{
    sfVector2f size;
    size.x = HELP_LEN;
    size.y = HELP_WID;
    sfVector2f position;
    position.x = HELP_OFFSET_LEN;
    position.y = HELP_OFFSET_WID;

    sfRectangleShape *result = sfRectangleShape_create();
    sfRectangleShape_setSize(result, size);
    sfRectangleShape_setPosition(result, position);
    sfRectangleShape_setFillColor(result, sfWhite);
    sfRectangleShape_setOutlineThickness(result, BUTTON_THICKNESS);
    sfRectangleShape_setOutlineColor(result, sfBlack);
    return result;
}

sfText *init_help_text(void)
{
    sfVector2f position;
    position.x = HELP_TEXT_LEN;
    position.y = HELP_TEXT_WID;
    sfText *text = sfText_create();
    sfFont *font = sfFont_createFromFile(FONT_PATH);
    sfText_setFont(text, font);
    sfText_setString(text, HELP_STR);
    sfText_setCharacterSize(text, 19);
    sfText_setColor(text, sfBlack);
    sfText_setPosition(text, position);
    return text;
}

t_gui_drop_menu *init_help_menu(void)
{
    t_gui_drop_menu *result = malloc(sizeof(t_gui_drop_menu));
    result->options = NULL;
    result->button = malloc(sizeof(t_gui_object));
    result->button->is_clicked = is_button_clicked;
    result->button->is_hover = is_mouse_hover;
    result->button->state = NONE;
    result->button->rect = init_help_button_rect();
    result->button->text = init_help_text();
    return result;
}
