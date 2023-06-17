/*
** EPITECH PROJECT, 2023
** include
** File description:
** include
*/

#ifndef INCLUDE_
    #define INCLUDE_

    #include <SFML/Graphics.h>
    #include "structs.h"

int mypaint(void);
all_object_t *init_all_objects(void);
sfRenderWindow *init_window_object(void);
t_gui_drop_menu *init_edit_menu(void);
t_gui_drop_menu *init_file_menu(void);
t_gui_drop_menu *init_help_menu(void);
button_t *init_draw_window(void);
button_t *init_eraser(void);
button_t *init_pencil(void);
void is_button_clicked(struct s_gui_object *button, sfMouseButtonEvent *mouse);
void is_zone_clicked(button_t *draw_zone, sfMouseButtonEvent *mouse);
void is_mouse_hover(struct s_gui_object *button, sfMouseMoveEvent *mouse);
void free_all_objects(all_object_t *paint);
void analyse_events(all_object_t *paint);
void draw_pencil(button_t *draw_zone, all_object_t *paint);
void change_all_colors(all_object_t *paint);
void before_action_draw(all_object_t *paint);
void after_action_draw(all_object_t *paint);
void draw_button(sfRenderWindow *window, t_gui_object *button);
struct s_gui_object *init_new_file_options(void);

#endif /* INCLUDE_ */
