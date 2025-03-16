compile: build run

build:
	gcc      \
	./*.c \
	-o play.out

run:
	./play.out
