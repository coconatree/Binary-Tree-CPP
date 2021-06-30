#
#
#
#
#
#
#
#
#

GCC = g++

OUT = ./out
SRC = ./src
INC = ./src/include

OBJ = Main.o TreeNode.o

NAME = programme.out

FILE_PATHS = $(SRC)/Main.cpp $(SRC)/TreeNode.cpp

# Build commands

all: $(OBJ)
	g++ -o ./$(OUT)/$(NAME) $(OBJ)
	rm -f $(OBJ)


$(OBJ):
	g++ -c $(FILE_PATHS)

# Clean command

clean:
	rm -f $(OBJ)


