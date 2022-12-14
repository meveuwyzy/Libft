
CC = gcc

NAME = libft.a

SRC = ft_atoi.c\
		ft_itoa.c\
		ft_split.c\
		ft_bzero.c\
		ft_calloc.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_memcpy.c\
		ft_memchr.c\
		ft_memcmp.c\
		ft_memccpy.c\
		ft_memmove.c\
		ft_memset.c\
		ft_putchar_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c\
		ft_putstr_fd.c\
		ft_strlen.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strnstr.c\
		ft_strncmp.c\
		ft_strdup.c\
		ft_strmapi.c\
		ft_strjoin.c\
		ft_strtrim.c\
		ft_tolower.c\
		ft_toupper.c\
		ft_substr.c

OBJ = $(SRC:.c=.o)

HEADER = libft.h

INC = ./

all: $(NAME)

$(NAME):$(OBJ)
	ar rc $(NAME) $?
	ranlib $(NAME)

%.o:%.c $(HEADER)
	$(CC) -Wall -Wextra -Werror -I$(INC) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
	rm -rf libft.so

re: fclean all