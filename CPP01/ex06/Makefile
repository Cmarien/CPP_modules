SRCS		=	srcs/main.cpp	\
				srcs/Karen.cpp	\
				

OBJS_SRCS	=	$(SRCS:.cpp=.o) 

.cpp.o:
				${CC} ${CFLAGS} -c ${INCLUDES} $< -o ${<:.cpp=.o}

INCLUDES	=	-I./includes/

NAME		=	karenFilter

CFLAGS      =   -Wall -Werror -Wextra

CC			=	clang++

RM			=	rm -f

${NAME}:		${OBJS_SRCS}
				${CC} -o ${NAME} ${SRCS} ${CFLAGS} ${INCLUDES}

all:			${NAME}

clean:
				find . -type f \( -name "*~" -o -name "#*#" -o -name "*.o" -o -name "*.gch" \) -delete

fclean:			clean
				${RM} ${NAME}

re:				fclean all

mv_objs:		find . -type f -name "*.o" -exec mv -ft objs {} +

.PHONY:			all clean fclean re
