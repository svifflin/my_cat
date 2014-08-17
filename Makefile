NAME	= cat

##
## DIRECTORY
##
LIBS	= ./libs/

SRCS	= main.c		\
	  parsing.c		\
	  my_cat.c		\
	  options.c		\
	  $(LIBS)put.c		\
	  $(LIBS)f_str.c	\
	  $(LIBS)xfunctions.c
OBJS	= $(SRCS:.c=.o)
CC	= gcc
RM	= rm -rf
CFLAGS	= -W -Wall -Wextra -ansi -pedantic

$(NAME)	: $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

all	: $(NAME)

clean	:
	$(RM) $(OBJS) *~ *#
	$(RM) $(LIBS)*~ $(LIBS)*#

fclean	: clean
	$(RM) $(NAME)

re	: fclean all