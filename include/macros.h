/*
** EPITECH PROJECT, 2023
** B-MUL-200-BDX-2-1-mypaint-anthony.ardhuin
** File description:
** macros
*/

#ifndef MACROS_H_
    #define MACROS_H_

    #define SUCCESS 0
    #define FAILURE 84

    #define WIN_NAME "My Paint"
    #define WIN_WID 1080
    #define WIN_HEI 1920

    #define FILE_WID 28
    #define FILE_LEN 98
    #define FILE_OFFSET_WID 0
    #define FILE_OFFSET_LEN 0
    #define FILE_STR "File"
    #define FILE_TEXT_WID 0
    #define FILE_TEXT_LEN 30

    #define EDIT_WID 28
    #define EDIT_LEN 98
    #define EDIT_OFFSET_WID 0
    #define EDIT_OFFSET_LEN 100
    #define EDIT_STR "Edition"
    #define EDIT_TEXT_WID 0
    #define EDIT_TEXT_LEN 115

    #define HELP_WID 28
    #define HELP_LEN 98
    #define HELP_OFFSET_WID 0
    #define HELP_OFFSET_LEN 200
    #define HELP_STR "Help"
    #define HELP_TEXT_WID 0
    #define HELP_TEXT_LEN 230

    #define FONT_PATH "./res/font/arial.ttf"

    #define BUTTON_THICKNESS 2

    #define MOUSE &event.mouseButton

    #define MOUSE_X curr_pos.x
    #define MOUSE_Y curr_pos.y

    #define COLOR_PEN paint->pencil_color

    #define WINDOW paint->window

#endif /* !MACROS_H_ */
