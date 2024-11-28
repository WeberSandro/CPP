# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sanweber <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/20 12:28:55 by sanweber          #+#    #+#              #
#    Updated: 2024/11/20 12:32:18 by sanweber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = zombies
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Arquivos de cabeçalho e código fonte
HEADERS = Zombie.hpp
SOURCES = main.cpp Zombie.cpp zombieHorde.cpp
OBJECTS = $(SOURCES:.cpp=.o)

# Regra principal (compilar tudo e gerar o executável)
all: $(TARGET)

# Regra para gerar o executável
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Regra para compilar arquivos .cpp em .o
%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpeza dos arquivos .o
clean:
	rm -f $(OBJECTS)

# Limpeza completa (arquivos .o e executável)
fclean: clean
	rm -f $(TARGET)

# Regra para rodar o programa
run: $(TARGET)
	./$(TARGET) 
