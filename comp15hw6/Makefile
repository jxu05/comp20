#
# Makefile for HW6
#
CXX      = clang++
CXXFLAGS = -g -Wall -Wextra
LDFLAGS  = -g

hw6degrees: main.cpp copy.cpp copy.h trie.h trie.cpp
	${CXX} ${CXXFLAGS} -o hw6degrees main.cpp copy.cpp trie.cpp

clean:
	rm -f hw6degrees

provide:
	provide comp15 hw6 main.cpp Makefile ReadMe.md copy.cpp copy.h trie.cpp trie.h
