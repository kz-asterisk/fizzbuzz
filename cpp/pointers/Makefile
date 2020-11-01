.PHONY : all
all : build test run 

.PHONY : build
build: pointers.cpp
	g++ -std=c++17 -o pointers pointers.cpp

.PHONY : test
test : build
	@echo "test1(TBU)"
	@echo "test2(TBU)"

.PHONY : run
run : test
	./pointers