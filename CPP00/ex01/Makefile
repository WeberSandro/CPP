# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sanweber <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/11 12:55:50 by sanweber          #+#    #+#              #
#    Updated: 2024/11/11 13:32:38 by sanweber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = phonebook

CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Arquivos de cabeçalho e código fonte
HEADERS = Contact.hpp PhoneBook.hpp
SOURCES = main.cpp Contact.cpp PhoneBook.cpp
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

# Regra para reconstruir o projeto do zero
re: fclean all
