SRC		=	ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memmove.c \
			ft_memset.c ft_strchr.c ft_strlcpy.c ft_strlen.c ft_tolower.c ft_toupper.c ft_strrchr.c \
			ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
			ft_strjoin.c ft_strtrim.c ft_split.c ft_putchar_fd.c ft_putstr_fd.c

OBJ		= $(SRC:%.c=%.o)

compiler : $(OBJ)
			cc -c $(SRC) -Wall -Wextra -Werror
			ar -rc libft.a $(OBJ)



clean :
	 rm *.o libft.a
	 	 
fclean : clean

re : clean compiler

all : compiler
