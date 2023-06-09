PHONY : clean
CC = gcc
CFLAGS = -Wall -W -std=c99 -g
LIBS =
LDFLAGS = `sdl2-config --cflags --libs`
EXEC = main
SRC = main.c Systemes/eventhandler.c Sprite/sprite.c Monde/monde.c Joueur/joueur.c Graphismes/graphismes.c Donnees/donnees.c
OBJ = $(SRC:.c=.o)

all: $(EXEC)
	clean

main: $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS) $(LDFLAGS)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	rm -rf *.o */*.o *~ $(EXEC)