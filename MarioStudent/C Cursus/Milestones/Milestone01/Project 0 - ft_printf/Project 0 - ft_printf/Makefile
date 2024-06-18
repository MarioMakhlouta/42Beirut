# Name of the final library to be created
NAME = libftprintf.a

# Name of the libft library to be created
LIBFTNAME = libft.a

# Compiler to be used
CC = cc

# Compiler flags: Wall = all warnings, Werror = treat warnings as errors, Wextra = extra warnings
CFLAGS = -Wall -Werror -Wextra

# Directory where the libft Makefile is located
LIBFTDIR = ./libft

# Source files for the printf implementation
SRCS = 	ft_printf.c print_pointer.c print_unsigned.c print_string.c print_int.c print_char.c print_hex.c 

# Object files derived from the source files
OBJS = $(SRCS:.c=.o)

# Default target: build the final library
all: $(NAME)

# Target to build the libft library
# Change to LIBFTDIR and run make
# Copy the created libft.a to the current directory
# Rename libft.a to the final library name
makelibft:
	@make -C $(LIBFTDIR)
	@cp $(LIBFTDIR)/$(LIBFTNAME) .
	@mv $(LIBFTNAME) $(NAME)

# Target to build the final library, dependent on makelibft and object files
# Create the library archive from the object files
$(NAME): makelibft $(OBJS)
	@ar -r $(NAME) $(OBJS)

# Target to clean up object files
# Remove object files
# Run make clean in LIBFTDIR to clean up libft object files
clean:
	@rm -f $(OBJS)
	@cd $(LIBFTDIR) && make clean

# Target to clean up everything including the final library
# Remove the final library
# Run make fclean in LIBFTDIR to clean up libft object files and library
fclean: clean
	@rm -f $(NAME)
	@cd $(LIBFTDIR) && make fclean

# Target to force a rebuild by cleaning up first and then building everything again
re: fclean all

# Special target indicating that these targets are not associated with files
.PHONY : all bonus clean fclean re 
