
SRCS	=	./src/*.c
OBJS	=	${.c=.o}

all: 
	gcc *.c lmlx/libmlx.a -framework OpenGL -framework AppKit

do: all
	./a.out