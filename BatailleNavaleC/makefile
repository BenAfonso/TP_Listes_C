C=gcc

CFLAGS= -Wall -ansi
LDFLAGS=

SOURCES=main.c

OBJECTS=$(SOURCES)
EXECUTABLE=Programme


$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

clean:
	rm -fr $(EXECUTABLE)
