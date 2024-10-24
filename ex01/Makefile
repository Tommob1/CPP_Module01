# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btomlins <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/24 15:01:49 by btomlins          #+#    #+#              #
#    Updated: 2024/10/24 15:03:23 by btomlins         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C++ = c++
C++_FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
INFILES = 	main.cpp\
			Zombie.cpp\
			zombieHorde.cpp\

OBJFILES = $(INFILES:.cpp=.o)

NAME = Moar_brainz

all: $(NAME)


$(NAME):$(OBJFILES)
	$(C++) $(C++_FLAGS) $(OBJFILES) -o $(NAME) 

clean:
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re