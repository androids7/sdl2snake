CC := g++
CFLAGS := -g -Wall -std=c++14
LDFLAGS := -lSDL2 -lSDL2_image -lSDL2_ttf
TARGET := test
SRCS := $(wildcard *.cpp)
INCLUDES := $(wildcard *.h)

OBJS := $(patsubst %cpp,%o,$(SRCS))
all:$(TARGET)
	./$(TARGET)
%.o:%.cpp
	$(CC) $(CFLAGS)  -c  $<
$(TARGET):$(OBJS)
	$(CC) $(CFLAGS)  -o $@ $^ $(LDFLAGS)
clean:
	rm -rf $(TARGET) *.o
