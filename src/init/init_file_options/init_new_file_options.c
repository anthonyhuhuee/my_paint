/*
** EPITECH PROJECT, 2023
** B-MUL-200-BDX-2-1-mypaint-anthony.ardhuin
** File description:
** init_new_file_options
*/

#include "structs.h"
#include "macros.h"
#include "mypaint.h"
#include <stdlib.h>

sfText *init_new_file_text(sfFont *font)
{
    sfVector2f position;
    position.x = 10;
    position.y = FILE_TEXT_WID + 31;
    sfText *text = sfText_create();
    sfText_setFont(text, font);
    sfText_setString(text, "New File");
    sfText_setCharacterSize(text, 19);
    sfText_setColor(text, sfBlack);
    sfText_setPosition(text, position);
    return text;
}

sfRectangleShape *init_new_file_button_rect(void)
{
    sfVector2f size;
    size.x = FILE_LEN;
    size.y = FILE_WID;
    sfVector2f position;
    position.x = FILE_OFFSET_LEN;
    position.y = FILE_OFFSET_WID + 31;

    sfRectangleShape *result = sfRectangleShape_create();
    sfRectangleShape_setSize(result, size);
    sfRectangleShape_setPosition(result, position);
    sfRectangleShape_setFillColor(result, sfWhite);
    sfRectangleShape_setOutlineThickness(result, BUTTON_THICKNESS);
    sfRectangleShape_setOutlineColor(result, sfBlack);
    return result;
}

struct s_gui_object *init_new_file_options(void)
{
    struct s_gui_object *option = malloc(sizeof(struct s_gui_object));
    option->is_clicked = is_button_clicked;
    option->is_hover = is_mouse_hover;
    option->font = sfFont_createFromFile(FONT_PATH);
    option->text = init_new_file_text(option->font);
    option->state = NONE;
    option->rect = init_new_file_button_rect();
    return option;
}
