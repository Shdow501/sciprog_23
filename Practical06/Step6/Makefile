CC = gcc
CCFLAGS = -O3
LDFLAGS = -lm

all: matmultc

matmultc: main.o matmult.o
	$(CC) $^ -o $@ $(LDFLAGS)
	#$(CC) main.o matmult.o -o matmultc $(LDFLAGS)


matmult.o: matmult.c
	$(CC) -c $(CCFLAGS) $<

main.o: main.c
	$(CC) -c $(CCFLAGS) $<

clean:
	rm *.o #it will remove all the .o files
