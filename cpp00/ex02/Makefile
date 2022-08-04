NAME	=	Account

CC		=	c++
CFLAGS	=	-Wall -Werror -Wextra -std=c++98
HEADER	=	Account.hpp

SRCS	=	tests.cpp Account.cpp
OBJS	=	$(SRCS:%.cpp=%.o)

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
				@echo "\n[$(BLUE)PHONEBOOK$(WHITE)] OBJECT FILES CREATED\n\c"
				@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
				@echo "[$(BLUE)PHONEBOOK$(WHITE)] EXECUTABLE FILE CREATED\n\c"

%.o			:	%.cpp $(HEADER)
				@$(CC) $(CFLAGS) -c $< -o $@
				@echo "$(GREEN)❱❱❱❱❱❱❱❱❱❱❱❱❱❱❱❱❱❱❱❱❱$(WHITE)\c"

clean		:
				@$(RM) $(OBJS)
				@echo "$(YELLOW)Object files deleted$(WHITE)"

fclean		:	clean
				@$(RM) $(NAME)
				@echo "$(YELLOW)Executable file deleted$(WHITE)"

re			:	fclean all