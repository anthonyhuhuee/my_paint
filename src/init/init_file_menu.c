/*
** EPITECH PROJECT, 2023
** init_file_menu.c
** File description:
** init_file_menu.c
*/

#include "macros.h"
#include "structs.h"
#include "mypaint.h"
#include <stdlib.h>

sfRectangleShape *init_file_button_rect(void)
{
    sfVector2f size;
    size.x = FILE_LEN;
    size.y = FILE_WID;
    sfVector2f position;
    position.x = FILE_OFFSET_LEN;
    position.y = FILE_OFFSET_WID;

    sfRectangleShape *result = sfRectangleShape_create();
    sfRectangleShape_setSize(result, size);
    sfRectangleShape_setPosition(result, position);
    sfRectangleShape_setFillColor(result, sfWhite);
    sfRectangleShape_setOutlineThickness(result, BUTTON_THICKNESS);
    sfRectangleShape_setOutlineColor(result, sfBlack);
    return result;
}

sfText *init_file_text(sfFont *font)
{
    sfVector2f position;
    position.x = FILE_TEXT_LEN;
    position.y = FILE_TEXT_WID;
    sfText *text = sfText_create();
    sfText_setFont(text, font);
    sfText_setString(text, FILE_STR);
    sfText_setCharacterSize(text, 19);
    sfText_setColor(text, sfBlack);
    sfText_setPosition(text, position);
    return text;
}

t_gui_drop_menu *init_file_menu(void)
{
    t_gui_drop_menu *result = malloc(sizeof(t_gui_drop_menu));
    result->button = malloc(sizeof(t_gui_object));
    result->button->is_clicked = is_button_clicked;
    result->button->is_hover = is_mouse_hover;
    result->button->state = NONE;
    result->button->font = sfFont_createFromFile(FONT_PATH);
    result->button->rect = init_file_button_rect();
    result->button->text = init_file_text(result->button->font);
    result->options = malloc(sizeof(t_gui_options));
    result->options->option = init_new_file_options();
    return result;
}
