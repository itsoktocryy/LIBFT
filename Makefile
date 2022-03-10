PURPLE			=	\033[0;35m
LIGHT_RED		=	\033[1;31m
LIGHT_GREEN		=	\033[1;32m
YELLOW			=	\033[1;33m
WHITE			=	\033[1;37m

NAME		=   libft.a

SRCS		= 	$(wildcard *.c)
INCS		=	$(wildcard *.h)
OBJS		= 	${SRCS:.c=.o}

CC			= 	@gcc
CFLAGS 		=	-Wall -Werror -Wextra

.c.o        :
				@echo "${WHITE}Compiling ${LIGHT_RED}/${PURPLE}$<"
				${CC} ${CFLAGS} -I $< -c $< -o $@

$(NAME) 	: 	${OBJS} 
					@ar rc ${NAME} ${OBJS}
					@echo "${LIGHT_GREEN}'libft.a' has been created"

all:		${NAME}

clean:
			@rm -f ${OBJS}
			@echo "${YELLOW}All '.o' files are now cleared"

fclean:
			@rm -f ${OBJS} ${NAME}
			@echo "${YELLOW}All '.o' && 'libft.a' files are now cleared"

re:			fclean all

.PHONY	= 	all clean fclean re