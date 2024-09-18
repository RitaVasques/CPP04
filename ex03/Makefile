NAME = materia
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC= AMateria.cpp \
	Character.cpp \
	Cure.cpp \
	Ice.cpp \
	main.cpp \
	MateriaSource.cpp

OBJ= $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

run: $(NAME)
	./$(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re


