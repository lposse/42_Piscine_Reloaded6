# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lposse <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/22 17:01:46 by lposse            #+#    #+#              #
#    Updated: 2024/12/26 22:23:45 by lposse           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


PROG=ft_display_file
SOURCE_DIR=.
CC=cc
CFLAGS=-Wall -Wextra -Werror

SRCS=$(wildcard $(SOURCE_DIR)/*.c)


all: $(PROG)

$(PROG): $(SRCS)
	$(CC) $(CFLAGS) $^ -o $@
	chmod +x $@

clean:
	rm -f $(PROG)

fclean: clean


.PHONY: all clean fclean
