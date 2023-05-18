CC = gcc
CFLAGS = -Wall -Wextra

SRCS = main.c serjlib.c
OBJS = $(patsubst %.c,output/%.o,$(SRCS))
EXECUTABLE = output/program

.PHONY: all clean run

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

output/%.o: %.c
	@mkdir -p output
	$(CC) $(CFLAGS) -c $< -o $@

run:
	$(EXECUTABLE)

clean:
	rm -rf output
