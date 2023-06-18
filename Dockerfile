# Utilisez une image de base avec le support C++ (g++ par exemple)
FROM gcc:latest

# Définissez le répertoire de travail dans le conteneur
WORKDIR /app

# Copiez les fichiers source et le Makefile dans le conteneur
COPY . /app

# Compilez le code source avec make
RUN make

# Commande par défaut à exécuter lorsque le conteneur est démarré
CMD ["./main"]
