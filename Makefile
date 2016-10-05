#
# Makefile for UPS, comp00
#
CXX = clang++
FLAGS = -O0 -Wall -Wextra -g
INCLUDES = $(shell echo *.h)

## Compile step (.c files -> .o files)

# To get *any* .o file, compile its .c file with the following rule.
%.o: %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@


all: delivery

delivery: delivery.o package.o truck.o warehouse.o
	${CXX} ${FLAGS} $^ -o $@ $(LDLIBS)

		
clean:
	rm -f delivery *.o

