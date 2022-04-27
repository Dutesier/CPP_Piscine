MAKEFLAGS += --quiet

# Defining Colors
WHT	= \033[0;37m
BLK	= \033[0;30m
RED	= \033[0;31m
YEL	= \033[0;33m
BLU	= \033[0;34m
GRN	= \033[0;32m

NAME		=	andopen

DIR_S		:=	srcs
SRCS		:=	srcs/main.cpp \

HEADERS		=	includes

DIR_O		:=	obj
OBJS		:=	$(SRCS:%.cpp=$(DIR_O)/%.o)

SUB_DIR_O := $(shell find $(DIR_S) -type d)
SUB_DIR_O := $(SUB_DIR_O:%=$(DIR_O)/%)

CC			=	c++
CFLAGS		=	-std=c++98 -Wall -Wextra -Werror

INCLUDES	=	-I $(HEADERS)

RM			=	rm -f
RM_DIR		=	rm -rf

$(DIR_O)/%.o:	%.cpp
				@mkdir -p $(DIR_O)
				@mkdir -p $(SUB_DIR_O)
				$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) $(INCLUDES) -o $(NAME) $(OBJS)
				printf "$(WHT)[$(GRN)$(NAME) COMPILED$(WHT)]\n"

all:			$(NAME)

clean:
				$(RM_DIR) $(DIR_O)
				printf "$(WHT)[$(YEL)$(NAME) OBJS REMOVED$(WHT)]\n"
			
fclean:			clean
				$(RM) $(NAME)
				printf "$(WHT)[$(YEL)$(NAME) BINARIES REMOVED$(WHT)]\n"

re:				fclean all

debug:			CFLAGS = -Wall -Wextra -Werror -fsanitize=address
debug:			fclean
debug:			all

.PHONY:			all clean fclean re		