C=gcc

CFLAGS= -Wall -ansi
LDFLAGS=

SOURCES=Main.c Bateau.c Flotte.c Joueur.c Partie.c Position.c

OBJECTS=$(SOURCES)
EXECUTABLE=BatailleNavale


$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

clean:
	rm -fr $(EXECUTABLE)
