# Libft – Your First C Library

**Libft** is the foundational project of the 42 curriculum that requires you to reimplement standard C library functions from scratch. The result is a custom library of functions for memory handling, string manipulation, character checks, and more, which will be used as a toolbox throughout the 42 Course.

This project is crucial for reinforcing your understanding of:
- Pointers and memory management
- Dynamic allocation
- String and array handling
- Static function usage
- Proper code organization and modularity
- Writing Makefiles

## Part 1: Libc Re-Implementations

You must re-code standard libc functions with a `ft_` prefix, without relying on external library calls.

| Function       | Description                                |
|----------------|--------------------------------------------|
| `ft_isalpha`   | Checks if character is an alphabet letter. |
| `ft_isdigit`   | Checks if character is a digit.            |
| `ft_isalnum`   | Alphanumeric check.                        |
| `ft_isascii`   | Checks for ASCII values.                   |
| `ft_isprint`   | Checks for printable characters.           |
| `ft_strlen`    | Returns the length of a string.            |
| `ft_memset`    | Fills memory with a constant byte.         |
| `ft_bzero`     | Zeros out a memory block.                  |
| `ft_memcpy`    | Copies memory area.                        |
| `ft_memmove`   | Safer memory copying with overlap support. |
| `ft_strlcpy`   | Copies string to a sized buffer.           |
| `ft_strlcat`   | Concatenates strings to a sized buffer.    |
| `ft_toupper`   | Converts lowercase to uppercase.           |
| `ft_tolower`   | Converts uppercase to lowercase.           |
| `ft_strchr`    | Locates a character in a string.           |
| `ft_strrchr`   | Locates last occurrence of a character.    |
| `ft_strncmp`   | Compares strings up to n characters.       |
| `ft_memchr`    | Scans memory for a byte.                   |
| `ft_memcmp`    | Compares memory areas.                     |
| `ft_strnstr`   | Locates a substring within a size limit.   |
| `ft_atoi`      | Converts a string to an integer.           |
| `ft_calloc`    | Allocates and zeroes out memory.           |
| `ft_strdup`    | Duplicates a string.                       |

---

## Part 2: Additional Utility Functions

Functions not found in libc, often needed for string manipulation and dynamic memory tasks.

| Function         | Description                                                  |
|------------------|--------------------------------------------------------------|
| `ft_substr`      | Extracts a substring from a string.                          |
| `ft_strjoin`     | Joins two strings into a new string.                         |
| `ft_strtrim`     | Trims characters from the start and end of a string.         |
| `ft_split`       | Splits a string by a delimiter and returns an array.         |
| `ft_itoa`        | Converts an integer to a string.                             |
| `ft_strmapi`     | Applies a function to each character and returns a new string. |
| `ft_striteri`    | Applies a function to each character in-place.               |
| `ft_putchar_fd`  | Writes a character to a file descriptor.                     |
| `ft_putstr_fd`   | Writes a string to a file descriptor.                        |
| `ft_putendl_fd`  | Writes a string followed by a newline.                       |
| `ft_putnbr_fd`   | Writes an integer to a file descriptor.                      |

---

## Bonus: Linked List Functions

For bonus points, Libft includes a custom linked list API. All list nodes use the following structure:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
} t_list;
