# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: cuechtri <cuechtri@student.42.fr>            +#+                      #
#                                                    +#+                       #
#    Created: 2022/07/26 13:09:08 by ovan-rhe      #+#    #+#                  #
#    Updated: 2022/07/27 17:01:46 by ovan-rhe      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC = main.c calculate_square.c input_processing.c create_output.c read_input.c \
		check_map.c

FLAGS = -Wall -Werror -Wextra

compile:
	gcc $(FLAGS) $(SRC) -o $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)