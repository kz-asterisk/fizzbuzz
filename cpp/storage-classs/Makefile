.PHONY: all
all : build test run 

.PHONY: build
build : storage-class.cpp
	g++ -o storage-class storage-class.cpp*

.PHONY: test
test: storage-class
	@echo "test(TBU TestCode)"

.PHONY: run
run : test
	./storage-class