CC := cc
CFLAGS := -Wall -Wextra -Werror
SRC_DIR := srcs
INCLUDE_DIR := includes
SRCS = $(SRC_DIR)/ft_putchar.c \
        $(SRC_DIR)/ft_swap.c \
        $(SRC_DIR)/ft_putstr.c \
        $(SRC_DIR)/ft_strlen.c \
        $(SRC_DIR)/ft_strcmp.c
OBJS := $(SRCS:.c=.o)
TARGET := libft.a

all: $(OBJS)
	ar rc $(TARGET) $(OBJS)
	ranlib $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re