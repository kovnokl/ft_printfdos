# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: knickel <knickel@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/21 06:00:27 by knickel           #+#    #+#              #
#    Updated: 2023/03/21 06:00:46 by knickel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# tool macros
NAME = libft.a
CC = gcc
RM = rm -f
OPT = -O0
CFLAGS = -c -Wall -Werror -Wextra -I .

# path macros
MAINSRCFILES = 
BONUSSRCFILES = 

OBJS = $(MAINSRCFILES:.c=.o)
BONUSOBJS = $(BONUSSRCFILES:.c=.o)


# phony rules
.PHONY: all clean fclean re bonus

all: $(NAME)

clean:
	$(RM) $(OBJS) $(BONUSOBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

bonus: $(OBJS) $(BONUSOBJS)
	ar rc $(NAME) $(OBJS) $(BONUSOBJS)
	ranlib $(NAME)

# non-phony targets
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

%.o:%.c
	$(CC) $(CFLAGS) $^ -o $@