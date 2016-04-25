#
# Makefile for HW6
#
CXX      = clang++
CXXFLAGS = -g -Wall -Wextra
LDFLAGS  = -g

hw6degrees: main.cpp copy.cpp copy.h trie.h trie.cpp trienode.h trienode.cpp
	${CXX} ${CXXFLAGS} -o hw6degrees main.cpp copy.cpp trie.cpp trienode.cpp

clean:
	rm -f hw6degrees

make provide:
	provide comp15 hw6 main.cpp copy.cpp copy.h trie.cpp trie.h trienode.h trienode.cpp \ ReadMe.md Makefile 
