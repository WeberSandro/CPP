# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sanweber <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/26 11:12:22 by sanweber          #+#    #+#              #
#    Updated: 2024/11/26 11:24:00 by sanweber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Ficheiros fonte
SRCS = main.cpp Fixed.cpp
OBJS = $(SRCS:.cpp=.o)

# Regra padrão (gera executavel "a.out")
all: $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS)

# Regra de limpeza
clean:
	rm -f $(OBJS)

fclean: clean
	rm -f a.out

re: fclean all
