*This project has been created as part of the 42 curriculum by eljessou.*

# Libft

## Description

**Libft** is the first project in the 42 curriculum. The goal of this project is to create a custom C library containing fundamental standard C library (`libc`) functions, as well as additional utility functions for string manipulation, memory management, and linked list handling.

Building `libft` provides a deep understanding of basic data structures, memory allocation, pointers, and algorithms in C, establishing a reliable toolkit to be reused in future 42 projects.

* **Goal:** Reimplement standard C library functions and extend them with custom helper functions while adhering strictly to 42's **Norm** guidelines and strict memory management rules (zero leaks, zero unexpected crashes).

## Library Overview

The `libft.a` static library is structured into three main categories:

### 1. Libc Functions Reimplementation

Reimplements standard `libc` functions with the `ft_` prefix without relying on external non-primitive functions:

* **Memory Manipulation:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`

* **String Analysis & Search:** `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`

* **String Copy & Concatenation:** `ft_strlcpy`, `ft_strlcat`

* **Character Checks & Conversion:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`, `ft_atoi`

### 2. Additional Utility Functions

Non-libc utility functions designed for string transformation, dynamic array creation, and file descriptor output:

* **String Operations:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`

* **File Descriptor Output:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### 3. Linked List Manipulation 

Functions designed to manage dynamically allocated singly-linked lists using the `t_list` structure:

* **List Nodes & Traversal:** `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`

* **Deletion & Iteration:** `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

### Data Structure Definition

```
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;


```

## Instructions

### Prerequisites

* `cc` or `gcc` compiler

* `make` utility

### Installation & Compilation

Clone the repository and compile the library:

```
# Clone the repository
git clone <repository-url>
cd libft

# Compile mandatory functions into libft.a
make
```

### Usage

To use `libft.a` in your C projects, include `libft.h` in your code and link the library during compilation:

```
#include "libft.h"

int main(void)
{
    ft_putstr_fd("Hello, Libft!", 1);
    return (0);
}


```

Compile your program with `libft.a`:

```
cc -Wall -Wextra -Werror main.c libft.a 

./a.out


```

#### Available `make` Rules

| Rule | Action | 
| ----- | ----- | 
| `make` / `make all` | Compiles source files into `libft.a`. | 
| `make clean` | Removes object files (`.o`). | 
| `make fclean` | Removes object files and `libft.a`. | 
| `make re` | Rebuilds the whole library from scratch (`fclean` + `all`). | 

## Resources

### References & Documentation

* **Linux Manual Pages (`man`):** Terminal manuals used to analyze standard C function specifications (`man 3 malloc`, `man 3 memcpy`, etc.).

* **YouTube Tutorials:** Conceptual understanding of pointer arithmetic, dynamic memory allocation (`malloc`/`free`), and linked list operations.

* **Google / Technical Articles:** Deep dives into standard behavior quirks, glibc vs. BSD implementations (`strlcpy`/`strlcat`), and memory leak prevention techniques.

### Use of AI

In accordance with 42 AI guidelines, artificial intelligence was strictly limited to learning and clarification:

AI Used solely to understand core C concepts and clarify edge cases in standard library behaviors. Anything else was implemented entirely by hand.