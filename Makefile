# Nom de l'exécutable final
TARGET = main

# Compilateur
CC = g++

# Options du compilateur
CFLAGS = -Wall -std=c++17

# Fichiers sources
SRCS = main.cpp Canva.cpp Point.cpp Forme.cpp Rectangle.cpp Cercle.cpp

# Fichiers objets générés
OBJS = $(SRCS:.cpp=.o)

# Commande par défaut pour construire l'exécutable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Règle pour compiler les fichiers sources en objets
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Nettoyer les fichiers objets et l'exécutable
clean:
	rm -f $(OBJS) $(TARGET)

# Phony targets pour éviter les conflits avec les fichiers
.PHONY: clean