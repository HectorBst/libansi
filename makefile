
COMPILER = gcc
ARGS = -Wall -Wextra -std=c11
ifeq ($(OS),Windows_NT)
	NAME = libansies.dll
	TESTNAME = tests.exe
else
	NAME = libansies.so
	TESTNAME = tests
endif

all: $(NAME)

$(NAME): ansi_sequences.o
	$(COMPILER) $(ARGS) -shared -Wl,-soname,$(NAME) -o $(NAME) ansi_sequences.o

ansi_sequences.o: ansi_sequences.c
	$(COMPILER) $(ARGS) -c -fPIC ansi_sequences.c

clean:
	rm -f *.o *.exe $(NAME) $(TESTNAME)

run-tests: $(NAME) build-tests
	./$(TESTNAME)

build-tests: $(TESTNAME)

$(TESTNAME): tests.o
	$(COMPILER) $(ARGS) -o $(TESTNAME) tests.o -L. -lansies

tests.o: tests.c
	$(COMPILER) $(ARGS) -c tests.c