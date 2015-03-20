
COMPILER = gcc
ARGS = -Wall -Wextra -std=c11
ifeq ($(OS),Windows_NT)
	NAME = ansies.dll
else
	NAME = libansies.so
endif

all: $(NAME)

$(NAME): ansi_sequences.o
	$(COMPILER) $(ARGS) -shared -Wl,-soname,$(NAME) -o $(NAME) ansi_sequences.o

ansi_sequences.o: ansi_sequences.c
	$(COMPILER) $(ARGS) -c -fPIC ansi_sequences.c

clean:
	rm -f *.o *.exe $(NAME)