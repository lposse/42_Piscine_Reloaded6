# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lposse <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/22 17:01:46 by lposse            #+#    #+#              #
#    Updated: 2024/12/22 18:48:26 by lposse           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


LIB=libft.a
SOURCE_DIR=srcs
INCLUDE_DIR=includes
OBJ_DIR=objs
CC=gcc
CFLAGS=-c -Wall -Wextra -Werror -I$(INCLUDE_DIR)


all: $(LIB)

$(LIB): $(wildcard $(OBJ_DIR)/*.o)
	ar rcs $@ $^

$(OBJ_DIR)/%.o: $(SOURCE_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(LIB)

re: fclean all

.PHONY: all clean fclean re
