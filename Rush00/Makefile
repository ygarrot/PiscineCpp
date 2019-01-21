# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdavin <jdavin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/07 10:37:03 by jdavin            #+#    #+#              #
#    Updated: 2019/01/13 23:19:25 by ygarrot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_retro

SRC_FILES = main \
			ACharacter \
			AGameEntity \
			Projectile \
			Dashboard \
			Laser \
			gameInit \
			renderMap \
			Player \
			Enemy \
			AWeapon

PP = clang++

PP_FLAGS = -Wall -Werror -Wextra 
# PP_FLAGS += -g3 -fsanitize=address

OBJ := $(addsuffix .o,$(SRC_FILES))

all: $(NAME)

$(NAME): $(OBJ)
	@$(PP) -o $(NAME) $(PP_FLAGS) -lncurses $(OBJ) 

$(OBJ): %.o: %.cpp
	@$(PP) -o $@ $(PP_FLAGS) -c $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
