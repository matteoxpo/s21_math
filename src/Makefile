CC = gcc
CFLAGS = -Wall -Werror -Wextra
SOURCES = $(wildcard *.c)
TESTS_SOURSES = $(wildcard *.check)
TESTS = $(TESTS_SOURSES:.check = .test)
OBJECTS = $(SOURCES:.c = .o)

all: s21_math.a

s21_math.a: $(OBJECTS) s21_math.h
	ar rc $@ $<
	ranlib $@

%.o: %.c
	$(CC) -c $^ -o $@

%.test: %.check s21_math.a
	checkmk $^ > $@.c
	$(CC) $@ -L. -ls21_math.a -lcheck -o $@ 

test: $(TESTS) s21_math.a
	$(foreach test, $(TESTS), ./$(test))

