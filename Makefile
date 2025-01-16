# Nom de l'ex�cutable final
TARGET = main

# Compilateur
CC = g++

# Options du compilateur
CFLAGS = -Wall -std=c++17

# Fichiers sources
SRCS = main.cpp Canva.cpp Point.cpp Forme.cpp Rectangle.cpp Cercle.cpp

# Fichiers objets g�n�r�s
OBJS = $(SRCS:.cpp=.o)

# Commande par d�faut pour construire l'ex�cutable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# R�gle pour compiler les fichiers sources en objets
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Nettoyer les fichiers objets et l'ex�cutable
clean:
	rm -f $(OBJS) $(TARGET)

# Phony targets pour �viter les conflits avec les fichiers
.PHONY: clean