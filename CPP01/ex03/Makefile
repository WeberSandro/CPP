# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sanweber <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/21 08:51:13 by sanweber          #+#    #+#              #
#    Updated: 2024/11/21 08:55:08 by sanweber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = weapons

CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Arquivos fonte e objetos
SOURCES = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJECTS = $(SOURCES:.cpp=.o)

# Regra principal
all: $(TARGET)

# Regra para gerar o executável
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

# Regra para compilar arquivos .cpp em .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpeza de arquivos temporários
clean:
	rm -f $(OBJECTS)

# Limpeza completa
fclean: clean
	rm -f $(TARGET)

# Recompilação completa
re: fclean all
