CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = $(shell find . -name '*.c')
OBJS = $(SRCS:%.c=build/%.o)

all: $(OBJS)
	$(CC) $(CFLAGS) -o test $(OBJS)

build/%.o: %.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf test

check:
	norminette .
