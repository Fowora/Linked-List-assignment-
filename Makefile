# list/Makefile
#
# Makefile for list implementation and test file.
#
# Emmanuel Fowora

list: main.c
	gcc -o main list.c list.h main.c
	
