compile: build run

build:
	gcc      \
	./*.c \
	-lm \
	-o play.out

run:
	./play.out
