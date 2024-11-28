# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sanweber <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 13:21:43 by sanweber          #+#    #+#              #
#    Updated: 2024/11/07 14:08:29 by sanweber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

TARGET = megaphone

# Compilador e flags
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror

# Regra principal
all: $(TARGET)

# Compila o arquivo objeto
megaphone.o: megaphone.cpp
			$(CXX) $(CXXFLAGS) -c megaphone.cpp

# Compila o executável
$(TARGET): megaphone.o
		   $(CXX) $(CXXFLAGS) -o $(TARGET) megaphone.o

# Limpa arquivos de compilação intermediários (objetos)
clean:
	rm -f *.o

# Limpa tudo, incluindo o executável
fclean: clean
	rm -f $(TARGET)

# Recompila tudo do zero
re: fclean all
