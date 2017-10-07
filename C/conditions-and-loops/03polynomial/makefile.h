CC = gcc
CFLAGS = -g -Wall -std=c89
LFLAGS = -lm
OBJECTS = polynomial.o

polynomial : $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o polynomial $(LFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -o %@ -c %< $(LFLAGS)

clean:
	rm *.o
