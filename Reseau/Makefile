CC = gcc
COMP = -Wall -Wextra -g
OBJ = Get.c
LIB = 
LM = -lm

prog: $(OBJ)
	$(CC) -o prog $(OBJ) $(COMP) $(LIB) $(LM)

Get.o: Get.c 
	$(CC) -c Get.c $(COMP) $(LIB) $(LM)

clean: 
	rm $(OBJ)
