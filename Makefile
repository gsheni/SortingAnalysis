.SUFFIXES: .cpp

CC = g++
CFLAGS = -g -I/usr/local/include -DPRINT
LDIR =
LIBS =

OBJ = Experiment.o Data.o SelectionSort.o main.o MergeSort.o QuickSort.o

test: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ) $(LDIR) $(LIBS)

.cpp.o:
	$(CC) $(CFLAGS) -c -std=c++0x $?

clean:
	rm -f test $(OBJ) $(OBJ2)
