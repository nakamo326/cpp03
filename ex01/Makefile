NAME = ex01
CFLAGS = -Wall -Wextra -Werror
INCLUDE = ./

SRC =	./main.cpp \
			./ClapTrap.cpp \
			./ScavTrap.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	clang++ -g -std=c++03 $(CFLAGS) -I $(INCLUDE) $^ -o $@

%.o: %.cpp
	clang++ -g -std=c++03 $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(NAME)

fclean:
	$(RM) $(OBJ)
	$(RM) $(NAME)

re: clean all

.PHONY: all clean re
