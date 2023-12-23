# Compiler
CC := cc

# Compiler flags
CFLAGS := -Wall -Wextra -Werror

# Source files
SRCS := ft_isalpha.c    ft_memcmp.c     ft_strlcat.c    ft_strrchr.c\
		ft_atoi.c       ft_isascii.c    ft_memcpy.c     ft_strlcpy.c    ft_tolower.c\
		ft_bzero.c      ft_isdigit.c    ft_memmove.c    ft_strlen.c     ft_toupper.c\
		ft_calloc.c     ft_isprint.c    ft_memset.c     ft_strncmp.c    ft_strdup.c\
		ft_isalnum.c    ft_memchr.c     ft_strchr.c     ft_strnstr.c    ft_substr.c\
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c\
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \

# Bonus source files		
BONUSSRC := ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c\
			ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c\

# Object files
OBJS := $(SRCS:.c=.o)

# Bonus object files
BONUSOBJS = $(BONUSSRC:%.c=%.o)

# Target executable
NAME := libft.a

# Build the TARGET executable
$(NAME): $(OBJS)
	ar rcs $@ $^

# Default NAME
all: $(NAME)

# Compile source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(BONUSOBJS)
	ar rcs $(NAME) $(BONUSOBJS)

# Clean up object files and the TARGET executable
clean:
	rm -f $(OBJS) $(BONUSOBJS)

# Clean up object files, the TARGET executable, and any other generated files
fclean: clean
	rm -f $(NAME)

re: fclean all bonus

.PHONY: all clean fclean re
