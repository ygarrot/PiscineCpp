# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/07 09:46:52 by ygarrot           #+#    #+#              #
#    Updated: 2019/01/18 23:40:23 by ygarrot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MindOpen
SRC = \
			main \
			BeginLoop\
			DecByte\
			DecPtr\
			EndLoop\
			IncPtr\
			new \
			Exception \
			IMindOpen \
			InsertByte\
			PrintByte\
			IncByte

FLAGS = -Wall -Wextra -Werror 

OBJ := $(addsuffix .o,$(SRC))

$(all): $(NAME)

$(NAME): $(OBJ)
	clang++ -o $(NAME) $(FLAGS) $(OBJ)

$(OBJ):%.o: %.cpp
	clang++ -o $@ $(FLAGS) -c $<

clean: 
	rm $(OBJ)

fclean: clean
	rm $(NAME)

re: fclean $(NAME)

.PHONY: all re clean fclean
