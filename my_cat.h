/*
** my_cat.h for my_cat in /home/darkseb/Documents/etna1/DEVC/my_cat
** 
** Made by Sebastien Vifflin
** Login   <viffli_s@etna-alternance.net>
** 
** Started on  Thu Feb  9 14:39:56 2012 Sebastien Vifflin
** Last update Thu Feb  9 14:39:57 2012 Sebastien Vifflin
*/

#include	<stdio.h>
#include	<stdlib.h>

#ifndef		MY_CAT_H
# define	MY_CAT_H

# define	OPTIONS "ben"

void		usage();
int		check_opts(char **, char []);
void		manuel_mod(char []);
void		auto_mod(char **, char []);
void		opt_prefix(char [], char []);
void		opt_suffix(char [], char []);

/*
** LIBS
*/

void		my_putchar(char);
void		my_putstr(char *);
void		my_puts(int, char *);
int		my_strlen(char *);

/*
** XFUNCTIONS
*/

size_t		xread(int, void *, size_t);
int		xopen(const char *);

#endif
