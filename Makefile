# Nom de l'exécutable
EXECUTABLE = main

# Répertoire des fichiers source
SRCDIR = src

# Répertoire de compilation des fichiers objets
OBJDIR = obj

# Liste des fichiers source (tous les fichiers .cpp dans le répertoire SRCDIR)
SOURCES = $(wildcard $(SRCDIR)/*.cpp)

# Liste des fichiers objets (même nom que les fichiers source, mais dans le répertoire OBJDIR)
OBJECTS = $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SOURCES))

# Compiler et flags
CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

# Règle par défaut
all: $(EXECUTABLE)

# Règle pour l'exécutable
$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Règle générique pour la compilation des fichiers objets
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Crée le répertoire des fichiers objets s'il n'existe pas
$(OBJDIR):
	mkdir -p $(OBJDIR)

# Nettoie les fichiers objets et l'exécutable
clean:
	rm -rf $(OBJDIR) $(EXECUTABLE)
