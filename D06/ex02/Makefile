# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/07 09:46:52 by ygarrot           #+#    #+#              #
#    Updated: 2019/01/16 20:54:22 by ygarrot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Identify
SRC = \
			A.class \
			B.class\
			Base\
			C.class\
			main	

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
