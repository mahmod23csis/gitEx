CC=g++
EXE=prog4
OBJECTS=main.o horsePower.o
CFLAGS=-Wall -fno-diagnostics-color

$(EXE):		$(OBJECTS)
		$(CC) -o $(EXE) $(OBJECTS)

main.o:		main.cpp
		$(CC) -c $(CFLAGS) main.cpp

horsePower.o:	horsePower.cpp
		$(CC) $(CFLAGS) -c horsePower.cpp

clean:
		rm -rf $(OBJECTS) $(EXE) *~
