CC = gcc
OPTS = -Wall -ansi -g
PROG = assin4

$(PROG).exe: $(PROG).c
	$(CC) $(OPTS) -o $(PROG).exe $(PROG).c

all: $(PROG).exe
	
test: $(PROG).exe
	./$(PROG).exe

.PHONY: clean
clean:
	rm $(PROG).exe
