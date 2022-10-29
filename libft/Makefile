# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iragusa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/22 15:15:27 by iragusa           #+#    #+#              #
#    Updated: 2022/10/28 17:09:02 by iragusa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# \ = is used to Splitting Long Lines 3.1.1

# ;\ = indicates a multiline command and keeps the instance of the terminal for
# the next command

# % = the same as * 'wildcard'
# $@ = means what is before the : in the target
# $^ = means what is after the : in the target
# $< = the first prerequisite (usually a source file)
# -I.  = adds include directory of header files.
# -f = force the removal even if the files have been already deleted.

# -c = Compile or assemble the source files, but do not link.
# The linking stage simply is not done. The ultimate output is
# in the form of an object file for each source file.
# By default, the object file name for a source file is made by replacing
# the suffix .c, .i, .s, etc., with .o. Unrecognized input files,
# not requiring compilation or assembly, are ignored.

NAME = libft.a

CC = gcc

AR = ar -rcs

FLAG = -Werror -Wall -Wextra

SRC = ft_atoi.c ft_putchar_fd.c ft_strjoin.c ft_strtrim.c\
	ft_bzero.c ft_putendl_fd.c ft_strlcat.c ft_substr.c\
	ft_calloc.c ft_putnbr_fd.c ft_strlcpy.c ft_tolower.c\
	ft_isalnum.c ft_memchr.c ft_putstr_fd.c ft_strlen.c\
	ft_toupper.c ft_isalpha.c ft_memcmp.c ft_split.c\
       	ft_strmapi.c ft_isascii.c ft_memcpy.c ft_strchr.c\
       	ft_strncmp.c ft_isdigit.c ft_memmove.c ft_strdup.c\
	ft_strnstr.c ft_isprint.c ft_memset.c ft_striteri.c\
       	ft_strrchr.c ft_itoa.c

SRC_BONUS = ft_lstadd_front.c ft_lstnew.c ft_lstsize.c ft_lstadd_back.c\
	    ft_lstlast.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
	    ft_lstmap.c

OBJ = $(SRC:.c=.o)

OBJ_BONUS = $(SRC_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) -c $(FLAG) -I. $< -o $@

clean: 
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus:	$(OBJ_BONUS) 
	$(AR) $(NAME) $(OBJ_BONUS) 
	
.PHONY: bonus all clean fclean re
