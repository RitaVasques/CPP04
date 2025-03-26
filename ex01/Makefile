NAME = animal
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC= Animal.cpp \
	Cat.cpp \
	Dog.cpp \
	main.cpp \
	Brain.cpp

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


