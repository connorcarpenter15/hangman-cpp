CC = g++
CFLAGS = -Wall -std=c++11
SRC_DIR = src

SRCS = $(wildcard $(SRC_DIR)/**/*.cpp) main.cpp
OBJS = $(SRCS:.cpp=.o)
EXECUTABLE = hangmanGame

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(SRC_DIR)/**/*.o *.o $(EXECUTABLE)
