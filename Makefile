# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nsena <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/29 16:31:42 by nsena             #+#    #+#              #
#    Updated: 2020/08/29 16:31:43 by nsena            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COLOR_NONE = \e[0m
COLOR_WHITE = \e[1;37m
COLOR_BLUE = \e[1;34m
COLOR_GREEN = \e[1;32m
COLOR_PURPLE = \e[1;35m

SRC_DIR = ./src
INC_DIR = ./includes
OBJ_DIR = obj

LIBS = ""
INCL = -I$(INC_DIR)

OBJS = $(patsubst $(SRC_DIR)/%,$(OBJ_DIR)/%,$(SRCS:.c=.o))
SRCS = $(SRC_DIR)/ivec2.c $(SRC_DIR)/ivec3.c $(SRC_DIR)/ivec4.c $(SRC_DIR)/mat4.c $(SRC_DIR)/vec2.c $(SRC_DIR)/vec3.c $(SRC_DIR)/vec4.c
INCS = $(INC_DIR)/cla.h $(INC_DIR)/ivec2.h $(INC_DIR)/ivec3.h $(INC_DIR)/ivec4.h $(INC_DIR)/mat4.h $(INC_DIR)/vec2.h $(INC_DIR)/vec3.h $(INC_DIR)/vec4.h
OBJ = $(patsubst %.c,%.o,$(SRCS))
#LIBFT_SRC = $(shell find $(LIBFT_DIR) -type f -name "*.c")
#LIBFT_INCS = $(shell find $(LIBFT_DIR) -type f -name "*.h")

NAME = libcla.a

CC = clang
CCFL = -Wall -Werror -Wextra


all: $(NAME)

$(NAME): $(OBJS) $(INCS)
	@printf "$(COLOR_GREEN)Linking objects together...$(COLOR_NONE)\n"
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@printf "$(COLOR_GREEN)Compiling $(COLOR_PURPLE)$<$(COLOR_GREEN) to $(COLOR_PURPLE)$@$(COLOR_GREEN)...$(COLOR_NONE)\n"
	@mkdir -p obj
	@$(CC) $(CCFL) $(INCL) $< -c -o $@

clean:
	@printf "$(COLOR_GREEN)Cleaning object files...$(COLOR_NONE)\n"
	@/bin/rm -rf $(OBJ_DIR)

fclean: clean
	@printf "$(COLOR_GREEN)Cleaning executable...$(COLOR_NONE)\n"
	@/bin/rm -f $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean re