##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile
##

SRC = 	main.c \
		mypaint.c \
		is_hover.c \
		is_clicked.c \
		analyse_events.c \
		draw_pencil.c \
		all_draw.c \
		change_all_colors.c \
		init/init_help_menu.c \
		init/init_file_menu.c \
		init/init_edit_menu.c \
		init/init_all_objects.c \
		init/init_window_object.c \
		init/init_draw_window.c \
		init/init_eraser.c \
		init/init_pencil.c \
		init/init_file_options/init_new_file_options.c \
		free/free_all_objects.c

OBJ = $(addprefix src/, $(SRC:.c=.o))

NAME = my_paint

CFLAGS = -Wall -Wextra -Werror -I./include/

CSFML = -lcsfml-graphics -lcsfml-system -lcsfml-window

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(CSFML)

all: $(NAME)

clean:
	rm -f $(OBJ)
	make -C tests/ clean

fclean: clean
	rm -f $(NAME)
	find . -name "*.gcno" -delete
	find . -name "*.gcda" -delete
	make -C tests/ fclean

unit_tests:
	make -C tests/

run_tests:
	make -C tests/ run_tests

tests_run:
	make -C tests/ tests_run

re: fclean all

.PHONY: all clean fclean re unit_tests run_tests tests_run
