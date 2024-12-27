# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lposse <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/22 17:01:46 by lposse            #+#    #+#              #
#    Updated: 2024/12/27 19:07:19 by lposse           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


PROG=ft_display_file
CC=cc
CFLAGS= -Wall -Wextra -Werror


all: $(PROG)

$(PROG): ft_display_file.c
	$(CC) $(CFLAGS) ft_display_file.c -o ft_display_file
	chmod +x ft_display_file

clean:
	rm -f *.o

fclean:	clean
	rm -f $(PROG)


.PHONY: all clean fclean
