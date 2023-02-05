SRC=Chaine.cpp tests_catch.cpp main_test.cpp
#SRC=$(wildcard *.cpp)  
EXE=cpp5

CXXFLAGS+=-MMD -g -O2 -Wall -Wextra 
LDFLAGS= 

OBJ=$(addprefix build/,$(SRC:.cpp=.o))
DEP=$(addprefix build/,$(SRC:.cpp=.d))

all: $(OBJ)
	$(CXX) -o $(EXE) $^ $(LDFLAGS)

build/%.o: %.cpp
	@mkdir -p build
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	rm -rf build core *.gch
	rm -rf *.o
-include $(DEP)
