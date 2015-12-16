C=gcc

CFLAGS= -Wall -ansi
LDFLAGS=

SOURCES=Main.c Bateau.c Partie.c Joueur.c
#Flotte.c  Position.c

OBJECTS=$(SOURCES)
EXECUTABLE=BatailleNavale


$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

clean:
	rm -fr $(EXECUTABLE)
