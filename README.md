# <p align="Center">C - printf</p>

# Resources
Description...

<br>

## Read or Watch: 

- [Approaching a Project](https://intranet.hbtn.io/concepts/881)
- [Group Projects](https://intranet.hbtn.io/concepts/893)
- [Pair Programming - How To](https://intranet.hbtn.io/concepts/894)
- [Flowcharts](https://intranet.hbtn.io/concepts/895)
<br><br>

## Man or Help
> `man_3_printf` = En cours de création...

--------------------

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/main/betty-style.pl) and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/main/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called `main.h`
- Don’t forget to push your header file
- All your header files should be include guarded
- Note that we will not provide the `_putchar` function for this project
--------------------

## Authorized functions and macros

- write (man 2 write)
- malloc (man 3 malloc)
- free (man 3 free)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg)

--------------------

<br>

## Requirements

# Prototype
### [main.h](lien)
<details>
<summary>Prototype File - main.h</summary>
<br>

```h
#ifndef PROTOTYPE_H
#define PROTOTYPE_H

/******** Bibliothèque **********/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

/******** Function prototypes **********/
int _printf(const char *format, ...);

typedef struct {
    char *specifier;
    int (*printFunction)(va_list);
} _printfType;

#endif
```
</details>
<br>

# TASKS

### [0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life](Lien)

> Write a function that produces output according to a format.

- Prototype: `int _printf(const char *format, ...);`
- Returns: the number of characters printed (excluding the null byte used to end output to strings)
- write output to stdout, the standard output stream
- `format` is a character string. The format string is composed of zero or more directives. See `man 3 printf` for more detail. You need to handle the following conversion specifiers:
	- `c`
	- `s`
	- `%`
- You don’t have to reproduce the buffer handling of the C library `printf` function
- You don’t have to handle the flag characters
- You don’t have to handle field width
- You don’t have to handle precision
- You don’t have to handle the length modifiers

<details>
<summary>Nos Retour</summary>
<br>

J'ai commencé par faire le fichier _prinf en utilisant la structure de contrôle `Switch`. Celle-ci semble fonctionne comme nous le souhaitons, mais manque de peau, il comporte un peu trop de ligne pour `bétty` qui n'en veut seulement `40`.

Nous allons modifier le code pour le repartir en plusieurs fonction dans un fichier nommé à titre d'exemple `get_op_functions.`

</details>

------------------------------

### [1. Education is when you read the fine print. Experience is what you get if you don't](Lien)

> Handle the following conversion specifiers:

- `d`
- `i`
- You don’t have to handle the flag characters
- You don’t have to handle field width
- You don’t have to handle precision
- You don’t have to handle the length modifiers


<details>
<summary>Nos Retour</summary>
<br>

	Void

</details>

------------------------------

### [2. Just because it's in print doesn't mean it's the gospel](Lien)

> Create a man page for your function.

<details>
<summary>Nos Retour</summary>
<br>

Nous avons mis en place le man printf qui porte le nom man_3_printf, il est en cours de création, mais les premiers prototypes de celui-ci fonctionne.

</details>

------------------------------

# Author
ROGERET Kevin<br>
> Project carried out within the framework of the school **[Holberton School](https://www.holbertonschool.com/).**<br>

