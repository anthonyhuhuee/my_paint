/*
** EPITECH PROJECT, 2023
** B-MUL-200-BDX-2-1-mypaint-anthony.ardhuin
** File description:
** structs
*/

#ifndef STRUCTS_H_
    #define STRUCTS_H_

    #include <SFML/Graphics.h>

enum e_gui_state {
    NONE = 0,
    HOVER,
    PRESSED,
    RELEASED
};

typedef struct s_gui_object {
    sfRectangleShape *rect;
    sfText *text;
    sfFont *font;
    void (*is_clicked)(struct s_gui_object *button, sfMouseButtonEvent *mouse);
    void (*is_hover)(struct s_gui_object *button, sfMouseMoveEvent *mouse);
    enum e_gui_state state;
} t_gui_object;

typedef struct s_gui_options {
    struct s_gui_object *option;
    struct s_gui_options *next;
} t_gui_options;

typedef struct s_gui_drop_menu {
    struct s_gui_object *button;
    struct s_gui_options *options;
} t_gui_drop_menu;

typedef struct button_s {
    sfRectangleShape *rect;
    void (*zone_clicked)(struct button_s *zone, sfMouseButtonEvent *mouse);
    enum e_gui_state state;
} button_t;

typedef struct all_object_s {
    sfRenderWindow *window;
    t_gui_drop_menu *file_menu;
    t_gui_drop_menu *edit_menu;
    t_gui_drop_menu *help_menu;
    button_t *draw_zone;
    button_t *eraser;
    button_t *pencil;
    sfColor pencil_color;
} all_object_t;

#endif /* !STRUCTS_H_ */
