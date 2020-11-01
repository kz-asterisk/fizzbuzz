.PHONY: all
all : build test run 

.PHONY: build
build : scope.cpp
	g++ -o scope scope.cpp

.PHONY: test
test: scope
	@echo "test(TBU TestCode)"

.PHONY: run
run : test
	./scope