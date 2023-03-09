NAME 		= push_swap

SRCS 		=	ft_five.c			\
				ft_three.c		\
				ft_two.c			\
				general_sort.c	\
				long_sort.c		\
				pa_pb.c			\
				ra_rb_rr.c		\
				rra_rrb_rrr.c		\
				sa_sb_ss.c		\
				free_all.c			\
				ft_calloc.c			\
				ft_free_arg.c			\
				ft_isdigit.c			\
				ft_putstrendl.c		\
				ft_strcmp.c			\
				ft_strdup.c			\
				long_atoi.c			\
				stack_sort.c			\
				check_errors.c				\
				get_stack.c					\
				push_swap.c					\

HDR 		= push_swap.h

OBJS 		= ${SRCS:%.c=%.o}

CC 			= gcc

RM 			= rm -f

CFLAGS 		= -Wall -Wextra -Werror

%.o: %.c Makefile ${HDR}
	${CC} ${CFLAGS} -c $< -o $@ -I ${HDR}

all:		${NAME}

$(NAME):	${OBJS}
			ar rc ${NAME} ${OBJS} 
			ranlib ${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: all clean fclean re .c.o