##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Makefile, don't forget to put CPPFLAGS and
## remove -Werror and backslash every src files
##

TARGET = ai
SRC = $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)
CFLAGS = -W -Wall -Wextra
CPPFLAGS = -I./include -lm

all	:	$(TARGET)

$(TARGET)	:
	$(CC) $(SRC) -o $(TARGET) $(CPPFLAGS)

clean	:
	$(RM) $(OBJ)

fclean	:	clean
	$(RM) $(TARGET)

re	:	fclean all
