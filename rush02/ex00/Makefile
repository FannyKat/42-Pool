
NAME = colle-2

NAME00 = colle-00

NAME01 = colle-01

NAME02 = colle-02

NAME03 = colle-03

NAME04 = colle-04

FLAGS = -Wall -Wextra -Werror

FILES = colle00.c colle01.c colle02.c colle03.c colle04.c 	display.c ft_split_space.c ft_strlen.c list.c main.c 

OBJ = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)
	gcc -o $(NAME00) $(FLAGS) main_rush.c display.c rush00.c ft_atoi.c
	gcc -o $(NAME01) $(FLAGS) main_rush.c display.c rush01.c ft_atoi.c
	gcc -o $(NAME02) $(FLAGS) main_rush.c display.c rush02.c ft_atoi.c
	gcc -o $(NAME03) $(FLAGS) main_rush.c display.c rush03.c ft_atoi.c
	gcc -o $(NAME04) $(FLAGS) main_rush.c display.c rush04.c ft_atoi.c

%.o: %.c
	gcc  -c $(FLAGS) $*.c

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME) $(NAME00) $(NAME01) $(NAME02) $(NAME03) $(NAME04)

re: fclean all
