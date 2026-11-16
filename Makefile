CC = clang
CFLAGS = -Wall -std=c99 -I./include
LDFLAGS = ./lib/libraylib.a -lGL -lm -lpthread -ldl -lrt -lX11
ARGS = "../TestData/test1.o ../TestData/test1.dat"

TARGET = my_game
HDRS = $(wildcard *.h)
SRCS = $(wildcard *.c)
all: $(TARGET) run

$(TARGET): $(SRCS) $(HDRS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET) $(LDFLAGS)

# Debug build that adds the -DVISUAL_DEBUG flag to CFLAGS
debug: CFLAGS += -DVISUAL_DEBUG
debug: $(TARGET) run
run: 
	./$(TARGET)

clean:
	rm -f $(TARGET)
