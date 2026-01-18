## 📖 About

**libft** is the first project at 42 School.  It involves recreating essential C standard library functions and additional utilities that will be used throughout the curriculum.  This library serves as a foundation for future projects. 

## ✨ Features

- ✅ 100% Norm compliant
- ✅ No memory leaks
- ✅ Fully tested and validated
- ✅ Makefile with relink protection
- ✅ Bonus linked list functions

## 📋 Function List

<details>
<summary><b>Part 1 - Libc Functions (23 functions)</b></summary>

### Character Checks
- `ft_isalpha` - Check if alphabetic character
- `ft_isdigit` - Check if digit character
- `ft_isalnum` - Check if alphanumeric character
- `ft_isascii` - Check if ASCII character
- `ft_isprint` - Check if printable character

### String Functions
- `ft_strlen` - Calculate string length
- `ft_strlcpy` - Copy string with size limit
- `ft_strlcat` - Concatenate string with size limit
- `ft_strchr` - Locate character in string
- `ft_strrchr` - Locate character in string (reverse)
- `ft_strncmp` - Compare strings up to n bytes
- `ft_strnstr` - Locate substring in string
- `ft_strdup` - Duplicate string

### Memory Functions
- `ft_memset` - Fill memory with constant byte
- `ft_bzero` - Zero a byte string
- `ft_memcpy` - Copy memory area
- `ft_memmove` - Copy memory area (overlap safe)
- `ft_memchr` - Scan memory for character
- `ft_memcmp` - Compare memory areas
- `ft_calloc` - Allocate and zero memory

### Conversion
- `ft_atoi` - Convert string to integer
- `ft_toupper` - Convert to uppercase
- `ft_tolower` - Convert to lowercase

</details>

<details>
<summary><b>Part 2 - Additional Functions (11 functions)</b></summary>

### String Manipulation
- `ft_substr` - Extract substring from string
- `ft_strjoin` - Concatenate two strings
- `ft_strtrim` - Trim characters from string
- `ft_split` - Split string by delimiter
- `ft_itoa` - Convert integer to string
- `ft_strmapi` - Apply function to each character (with index)
- `ft_striteri` - Iterate through string with function

### File Descriptors
- `ft_putchar_fd` - Output character to fd
- `ft_putstr_fd` - Output string to fd
- `ft_putendl_fd` - Output string + newline to fd
- `ft_putnbr_fd` - Output number to fd

</details>

<details>
<summary><b>Bonus - Linked Lists (9 functions)</b></summary>

- `ft_lstnew` - Create new list element
- `ft_lstadd_front` - Add element at beginning
- `ft_lstadd_back` - Add element at end
- `ft_lstsize` - Count list elements
- `ft_lstlast` - Get last element
- `ft_lstdelone` - Delete element
- `ft_lstclear` - Delete all elements
- `ft_lstiter` - Iterate through list
- `ft_lstmap` - Map function to list

</details>

## 🚀 Getting Started

### Prerequisites

- GCC compiler
- Make

### Installation

```bash
# Clone the repository
git clone https://github.com/1mad-bou/libft. git
cd libft

# Compile the library
make

# Compile with bonus
make bonus
```

### Compilation

```bash
make        # Compile mandatory part
make clean  # Remove object files
make fclean # Remove object files and library
make re     # Recompile everything
```
