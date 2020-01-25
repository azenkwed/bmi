NAME := bmi-cli

CC = gcc
DEBUG = -g
CFLAGS = -Wall -O2
CFLAGS += -Werror -Wextra -pedantic -std=c11

SRCS = $(wildcard *.c)
OBJS = $(wildcard *.o)

LIBS =
INCS =

.PHONY: clean

all: $(NAME)

$(NAME): $(SRCS)
	@echo Creating $(NAME)... -n
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

# Function used to check variables. Use on the command line:
# make print-VARNAME
# Useful for debugging and adding features
print-%: ; @echo $*=$($*)

clean:
	@rm -vf *.o
	@rm -vf $(NAME)
