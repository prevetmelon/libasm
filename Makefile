NAME = libasm.a
TESTNAME = test
TESTSRC = main.c
HEADER = libasm.h
CC = gcc
ASM = nasm
FLAGS = -Wall -Wextra -Werror -L. -lasm 
AFLAGS = -f macho64
SRCS = ft_strlen.s ft_strcpy.s ft_strcmp.s ft_strdup.s ft_write.s ft_read.s
OBJS = $(SRCS:.s=.o)

all: $(NAME)

%.o: %.s $(HEADER) $(SRCS)
	$(ASM) $(AFLAGS) -o $@ $<

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

test: $(NAME) $(TESTSRC)
	$(CC) $(CFLAGS) -o $(TESTNAME) $(TESTSRC) 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	rm -f $(TESTNAME)

re: fclean all
