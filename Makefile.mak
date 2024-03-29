CC = gcc
CFLAGS = -Wall -Wextra
SRCS = main.c subjects.c grades.c
OBJS = $(SRCS:.c=.o)
EXEC = grade_card

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS) $(EXEC)



