CC = gcc
CFLAGS = -Wall -Werror -Wextra
SOURCES = $(wildcard *.c)
TESTS_SOURSES = $(wildcard *.check)
TESTS = $(TESTS_SOURSES:.check = .test)
OBJECTS = $(SOURCES:.c = .o)

all: s21_math.a

rebuild: clean all

rebuild: clean all

s21_math.a: $(OBJECTS) s21_math.h
	ar rc lib$@ $(OBJECTS)
	ranlib -D lib$@
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
	rm -f $@.c
	checkmk $< > $@.c
	$(CC) $@.c -L. -lm -ls21_math -o $@ -lcheck 
	rm -f $@.c
	./$@

test: $(TESTS)

clean:
	rm -f *.a *.o *.test *.test.c
