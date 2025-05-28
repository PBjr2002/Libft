# Libft

**Libft** is your very first personal C library project, designed to help you build a solid foundation in C programming by reimplementing commonly used libc functions and creating additional utility functions. This custom library will serve as a useful tool throughout your cursus by allowing you to better understand memory management, string manipulation, and linked lists, all while adhering to strict coding standards.

The project is divided into three parts:

- **Part 1:** Reimplementation of essential libc functions with the `ft_` prefix.
- **Part 2:** Additional utility functions not present in the libc or implemented differently.
- **Bonus Part:** Implementation of linked list manipulation functions.

---

## Part 1 - Libc Functions

| Function Name | Prototype | Description | External Functions Allowed |
|---------------|------------|-------------|----------------------------|
| `ft_isalpha`  | `int ft_isalpha(int c);` | Checks if the character is alphabetic. | None |
| `ft_isdigit`  | `int ft_isdigit(int c);` | Checks if the character is a digit. | None |
| `ft_isalnum`  | `int ft_isalnum(int c);` | Checks if the character is alphanumeric. | None |
| `ft_isascii`  | `int ft_isascii(int c);` | Checks if the character is ASCII. | None |
| `ft_isprint`  | `int ft_isprint(int c);` | Checks if the character is printable. | None |
| `ft_strlen`   | `size_t ft_strlen(const char *s);` | Calculates the length of a string. | None |
| `ft_memset`   | `void *ft_memset(void *b, int c, size_t len);` | Fills memory with a constant byte. | None |
| `ft_bzero`    | `void ft_bzero(void *s, size_t n);` | Sets bytes in memory to zero. | None |
| `ft_memcpy`   | `void *ft_memcpy(void *dst, const void *src, size_t n);` | Copies memory area. | None |
| `ft_memmove`  | `void *ft_memmove(void *dst, const void *src, size_t len);` | Copies memory area handling overlap. | None |
| `ft_strlcpy`  | `size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);` | Copies a string with size limit. | None |
| `ft_strlcat`  | `size_t ft_strlcat(char *dst, const char *src, size_t dstsize);` | Concatenates strings with size limit. | None |
| `ft_toupper`  | `int ft_toupper(int c);` | Converts a character to uppercase. | None |
| `ft_tolower`  | `int ft_tolower(int c);` | Converts a character to lowercase. | None |
| `ft_strchr`   | `char *ft_strchr(const char *s, int c);` | Locates first occurrence of a character. | None |
| `ft_strrchr`  | `char *ft_strrchr(const char *s, int c);` | Locates last occurrence of a character. | None |
| `ft_strncmp`  | `int ft_strncmp(const char *s1, const char *s2, size_t n);` | Compares two strings up to n bytes. | None |
| `ft_memchr`   | `void *ft_memchr(const void *s, int c, size_t n);` | Scans memory for a character. | None |
| `ft_memcmp`   | `int ft_memcmp(const void *s1, const void *s2, size_t n);` | Compares memory areas. | None |
| `ft_strnstr`  | `char *ft_strnstr(const char *haystack, const char *needle, size_t len);` | Locates a substring in a string, limited to len. | None |
| `ft_atoi`     | `int ft_atoi(const char *str);` | Converts a string to an integer. | None |
| `ft_calloc`   | `void *ft_calloc(size_t nmemb, size_t size);` | Allocates memory initialized to zero. | `malloc` |
| `ft_strdup`   | `char *ft_strdup(const char *s);` | Duplicates a string. | `malloc` |

---

## Part 2 - Additional Functions

| Function Name   | Prototype | Description | External Functions Allowed |
|-----------------|------------|-------------|----------------------------|
| `ft_substr`     | `char *ft_substr(char const *s, unsigned int start, size_t len);` | Returns a substring from `s` starting at `start` with max length `len`. | `malloc` |
| `ft_strjoin`    | `char *ft_strjoin(char const *s1, char const *s2);` | Concatenates two strings into a new string. | `malloc` |
| `ft_strtrim`    | `char *ft_strtrim(char const *s1, char const *set);` | Returns a copy of `s1` with characters in `set` removed from start and end. | `malloc` |
| `ft_split`      | `char **ft_split(char const *s, char c);` | Splits string `s` by delimiter `c` into an array of strings. | `malloc`, `free` |
| `ft_itoa`       | `char *ft_itoa(int n);` | Converts an integer to its string representation. | `malloc` |
| `ft_strmapi`    | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char));` | Applies function `f` to each char of `s` and returns a new string. | `malloc` |
| `ft_striteri`   | `void ft_striteri(char *s, void (*f)(unsigned int, char*));` | Applies function `f` to each char of `s` (in-place). | None |
| `ft_putchar_fd` | `void ft_putchar_fd(char c, int fd);` | Writes character `c` to file descriptor `fd`. | `write` |
| `ft_putstr_fd`  | `void ft_putstr_fd(char *s, int fd);` | Writes string `s` to file descriptor `fd`. | `write` |
| `ft_putendl_fd` | `void ft_putendl_fd(char *s, int fd);` | Writes string `s` followed by a newline to file descriptor `fd`. | `write` |
| `ft_putnbr_fd`  | `void ft_putnbr_fd(int n, int fd);` | Writes integer `n` to file descriptor `fd`. | `write` |

---

## Bonus Part - Linked List Functions

| Function Name  | Prototype | Description | External Functions Allowed |
|----------------|------------|-------------|----------------------------|
| `ft_lstnew`    | `t_list *ft_lstnew(void *content);` | Creates a new list node with `content`. | `malloc` |
| `ft_lstadd_front` | `void ft_lstadd_front(t_list **lst, t_list *new);` | Adds node `new` at the beginning of the list. | None |
| `ft_lstsize`   | `int ft_lstsize(t_list *lst);` | Counts nodes in the list. | None |
| `ft_lstlast`   | `t_list *ft_lstlast(t_list *lst);` | Returns the last node of the list. | None |
| `ft_lstadd_back` | `void ft_lstadd_back(t_list **lst, t_list *new);` | Adds node `new` at the end of the list. | None |
| `ft_lstdelone` | `void ft_lstdelone(t_list *lst, void (*del)(void *));` | Frees a node’s content using `del` and frees the node. | `free` |
| `ft_lstclear`  | `void ft_lstclear(t_list **lst, void (*del)(void *));` | Deletes and frees a list and sets pointer to NULL. | `free` |
| `ft_lstiter`   | `void ft_lstiter(t_list *lst, void (*f)(void *));` | Applies function `f` to the content of each node. | None |
| `ft_lstmap`    | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));` | Creates a new list by applying `f` to each node’s content; uses `del` if allocation fails. | `malloc`, `free` |
