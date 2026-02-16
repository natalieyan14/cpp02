NAME = Orthodox_Canonical_Form_that_represents

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

CPPS = main.cpp bsp.cpp Fixed.cpp Point.cpp

HPPS = Fixed.hpp Point.hpp

OBJS = $(CPPS:.cpp=.o)

rm = rm -f

all: $(NAME)

$(NAME): $(OBJS) $(HPPS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp Makefile $(HPPS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re