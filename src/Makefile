APP:= bmi-cli

CC = gcc
DEBUG = -g
CFLAGS = -Wall -O2
CFLAGS += -Werror -Wextra -pedantic -std=c99

OBJS = $(wildcard *.o)
SRCS = $(wildcard *.c)
LIBS = 
INCI =

.PHONY: all clean print

.o.c: 
	$(CC) $(CFLAGS) -c $<

$(APP): $(OBJS) 
	$(CC) $(FLAGS) $< -o $@

clean:
	@rm -rvf $(OBJS)
	@rm -vf $(APP)	

print-%: ; @echo $*=$($*)
