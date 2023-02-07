SRC=Post.c
#SRC=$(wildcard *.cpp)  
EXE=spr

CXXFLAGS+=-g  -Wall -Wextra 
LDFLAGS= 

OBJ=$(addprefix build/,$(SRC:.cpp=.o))
DEP=$(addprefix build/,$(SRC:.cpp=.d))

all: $(OBJ)
	$(CXX) -o $(EXE) $^ $(LDFLAGS)

build/%.o: %.c
	@mkdir -p build
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	rm -rf *.o
-include $(DEP)
