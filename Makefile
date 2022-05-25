# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahalleux <ahalleux@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/25 14:55:56 by ahalleux          #+#    #+#              #
#    Updated: 2022/05/25 19:13:01 by ahalleux         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printf.a
TEMP = a.out
NAMEPROG = a.out

#supprimer la variable TEMP + dans la commande fclean l'ajourde la variable

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f


FILES = ft_printf_utils \
			ft_printf \
			ft_printpointer \

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))


.c.o: $(SRCS)
	$(CC) $(CFLAGS) -c -I./ -o $@ $<

$(NAME): $(OBJS)
	$(AR) $@ $^

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(TEMP) 


re: clean all