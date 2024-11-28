# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sanweber <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/19 15:28:17 by sanweber          #+#    #+#              #
#    Updated: 2024/11/19 15:34:18 by sanweber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = zombies

# Compilador e flags
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Arquivos de cabeçalho e código fonte
HEADERS = Zombie.hpp
SOURCES = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJECTS = $(SOURCES:.cpp=.o)

# Regras principais
all: $(TARGET)

# Regra para gerar o executável
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Regra para compilar arquivos .cpp em .o
%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpeza dos arquivos .o e do executável
clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(TARGET)

# Regra para rodar o programa
run: all
	./$(TARGET)
