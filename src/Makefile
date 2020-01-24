APP:= bmi-cli

CC = gcc
DEBUG = -g
CFLAGS = -Wall -O2
CFLAGS += -Werror -Wextra -pedantic -std=c99

OBJS = $(wildcard *.o)
SRCS = $(wildcard *.c)
LIBS = 
INCS =

.PHONY: all clean print

.o.c: $(SRCS) 
	$(CC) $(CFLAGS) -c $<

$(APP): $(SRCS) 
	$(CC) $(CFLAGS) $< -o $@

clean:
	@rm -rvf $(OBJS)
	@rm -vf $(APP)	

print-%: ; @echo $*=$($*)
