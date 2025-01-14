CXX = c++
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJ = $(SRC:.cpp=.o)
RM = rm -rf
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = FragTrap

all: $(NAME)

$(NAME): $(OBJ) ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: clean  