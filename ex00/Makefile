NAME = animal
CXX = c++
CXXFLAGS = -Wextra -Werror -Wall -std=c++98

SRC= Animal.cpp \
	WrongAnimal.cpp \
	Cat.cpp \
	WrongCat.cpp \
	Dog.cpp \
	main.cpp

OBJ= $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
