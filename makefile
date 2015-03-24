
COMPILER = gcc
ARGS = -Wall -Wextra -std=c11 -O3
PWD = $(shell pwd)
NAME = ansi
ifeq ($(OS),Windows_NT)
	LIBNAME = lib$(NAME).dll
	TESTNAME = tests.exe
else
	LIBNAME = lib$(NAME).so
	TESTNAME = tests
endif

all: $(LIBNAME)

$(LIBNAME): ansi.o
	$(COMPILER) $(ARGS) -shared -Wl,-soname,$(LIBNAME) -o $(LIBNAME) ansi.o

ansi.o: ansi.c
	$(COMPILER) $(ARGS) -c -fPIC ansi.c

clean:
	rm -f *.o $(LIBNAME) $(TESTNAME)

run-tests: build-tests
	export LD_LIBRARY_PATH=$$(pwd):$$LD_LIBRARY_PATH; ./$(TESTNAME)

valgrind: build-tests
	export LD_LIBRARY_PATH=$$(pwd):$$LD_LIBRARY_PATH; valgrind --leak-check=full ./$(TESTNAME)

build-tests: $(TESTNAME)

$(TESTNAME): $(LIBNAME) tests.o
	$(COMPILER) $(ARGS) -o $(TESTNAME) -L$(PWD) ansi.o tests.o -l$(NAME)

tests.o: tests.c
	$(COMPILER) $(ARGS) -c tests.c

commit: clean
	git add *
	git commit -a