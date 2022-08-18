NAME		=	animal

CC			=	c++
CFLAGS		=	-Wall -Werror -Wextra -std=c++98
HEADER		=	Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

SRCS		=	main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
OBJS		=	$(SRCS:%.cpp=%.o)

WHITE   	=	\033[0m
BLACK   	=	\033[0;30m
RED     	=	\033[0;31m
GREEN   	=	\033[0;32m
YELLOW  	=	\033[0;33m
BLUE    	=	\033[0;34m
MAGENTA 	=	\033[0;35m
CYAN    	=	\033[0;36m

.PHONY		:	all clean fclean re

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				@echo "\n[$(BLUE)ANIMAl$(WHITE)] OBJECT FILES CREATED\n\c"
				@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
				@echo "[$(BLUE)ANIMAl$(WHITE)] EXECUTABLE FILE CREATED\n\c"

%.o			:	%.cpp $(HEADER)
				@$(CC) $(CFLAGS) -c $< -o $@
				@echo "$(GREEN)❱❱❱❱❱❱$(WHITE)\c"

clean		:
				@$(RM) $(OBJS)
				@echo "$(YELLOW)Object files deleted$(WHITE)"

fclean		:	clean
				@$(RM) $(NAME)
				@echo "$(YELLOW)Executable file deleted$(WHITE)"

re			:	fclean all
