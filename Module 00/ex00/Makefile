MAKEFLAGS += --quiet

# Defining Colors
WHT	= \033[0;37m
BLK	= \033[0;30m
RED	= \033[0;31m
YEL	= \033[0;33m
BLU	= \033[0;34m
GRN	= \033[0;32m

NAME		=	megaphone

DIR_S		=	./
SRCS		=	megaphone.cpp \

DIR_O		=	obj
OBJS		=	$(SRCS:%.cpp=$(DIR_O)/%.o)

CC			=	c++
CFLAGS		=	-std=c++98 -Wall -Wextra -Werror

RM			=	rm -f
RM_DIR		=	rm -rf

$(DIR_O)/%.o:	$(DIR_S)%.cpp
				@mkdir -p $(DIR_O)
				$(CC) $(CFLAGS) -c $< -o $@

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
				printf "$(WHT)[$(GRN)$(NAME) COMPILED$(WHT)]\n"

all:			$(NAME)

clean:
				$(RM_DIR) $(DIR_O)
				printf "$(WHT)[$(YEL)$(NAME) OBJS REMOVED$(WHT)]\n"
			
fclean:			clean
				$(RM) $(NAME)
				printf "$(WHT)[$(YEL)$(NAME) BINARIES REMOVED$(WHT)]\n"

re:				fclean all

.PHONY:			all clean fclean re			
