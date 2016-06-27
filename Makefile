CXX = g++-5
CFLAGS = -Wall -Wextra -pedantic -std=c++11
DEBUG =
SRCS = Board.cpp main.cpp Staunton.cpp
OBJS = $(SRCS:.cpp=.o)
EXEC = chess
all: build link

.cpp.o:
	$(CXX) $(CFLAGS) $(DEBUG) -c $< -o $@

build: $(OBJS) depend

link: build
	$(CXX) $(CFLAGS) $(DEBUG) $(OBJS) -o $(EXEC)

.PHONY: depend clean build run all

clean:
	@rm -f $(EXEC)
	@rm -f $(OBJS)

run: build link
	./$(EXEC)

depend: $(SRCS)
	makedepend $^

valgrind: depend
	$(DEBUG) = -g
	make all
	valgrind ./$(EXEC)	

	
# DO NOT DELETE

Board.o: Board.h Staunton.h commons.h
main.o: commons.h Board.h Staunton.h
Staunton.o: Staunton.h commons.h
