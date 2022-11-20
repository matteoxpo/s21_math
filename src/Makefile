CC = gcc
CFLAGS = -Wall -Werror -Wextra
SOURCES = $(wildcard *.c)
TESTS_SOURSES = $(wildcard *.check)
TESTS = $(TESTS_SOURSES:.check=.test)
OBJECTS = $(SOURCES:.c=.o)

all: s21_math.a

rebuild: clean all

s21_math.a: $(OBJECTS) s21_math.h
	ar rc lib$@ $(OBJECTS)
	ranlib lib$@

%.o: %.c
	$(CC) -c $^ -o $@

%.test: %.check s21_math.a
	checkmk $< > $@.c
	$(CC) -c $@.c -o $@.o
	$(CC) $@.o -L. -lcheck -ls21_math -o $@
	rm -f $@.c $@.o

test: $(TESTS)
	$(foreach test, $(TESTS), ./$(test))

clean:
	rm -f *.a *.o *.test