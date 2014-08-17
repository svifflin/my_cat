##
## Makefile for Makefile in /home/darkseb/Documents/etna1/DEVC/my_cat
## 
## Made by Sebastien Vifflin
## Login   <viffli_s@etna-alternance.net>
## 
## Started on  Thu Feb  9 14:39:25 2012 Sebastien Vifflin
## Last update Thu Feb  9 14:39:27 2012 Sebastien Vifflin
##

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