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
