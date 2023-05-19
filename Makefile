CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = $(shell find . -name '*.c')
OBJS = $(SRCS:%.c=build/%.o)

all: $(OBJS)
	ar rcs libft.a $(OBJS)

build/%.o: %.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf libft.a

check:
	norminette .
