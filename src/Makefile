CC = gcc
CFLAGS = -Wall -Werror -Wextra
SOURCES = $(wildcard *.c)
TESTS_SOURSES = $(wildcard *.check)
TESTS = $(TESTS_SOURSES:.check=.test)
OBJECTS = $(SOURCES:.c=.o)

all: s21_math.a

rebuild: clean all

re: rebuild

s21_math.a: $(OBJECTS) s21_math.h
	ar rc lib$@ $(OBJECTS)
	ranlib -D lib$@

%.o: %.c
	$(CC) -c $^ -o $@

%.test: %.check s21_math.a
	rm -f $@.c
	checkmk $< > $@.c
	$(CC) $@.c -L. -lm -ls21_math -o $@ -lcheck 
	rm -f $@.c
	./$@

test: s21_math.a 
	$(CC) libs21_math.a tests.c -lcheck -o test
	./test

clean:
	rm -f *.a *.o
