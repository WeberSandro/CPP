# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sanweber <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/21 08:27:31 by sanweber          #+#    #+#              #
#    Updated: 2024/11/21 08:29:55 by sanweber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = strings

CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Arquivos fonte e objetos
SOURCES = main.cpp
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

# Limpeza total, incluindo o executável
fclean: clean
	rm -f $(TARGET)

# Regra para recompilar tudo do zero
re: fclean all
