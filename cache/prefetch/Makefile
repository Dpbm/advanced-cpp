CXX:=clang++
FLAGS := -g

INPUTS:=test-1.cpp test-2-nocache.cpp test-3-caching.cpp
OUTPUTS:=default.out nocache.out caching.out

SHELL := /usr/bin/bash

$(OUTPUTS): $(INPUTS)
	$(CXX) $(FLAGS) test-1.cpp -o default.out
	$(CXX) $(FLAGS) test-2-nocache.cpp -o nocache.out
	$(CXX) $(FLAGS) test-3-caching.cpp -o caching.out

	@echo "Default result:"
	time ./default.out
	@echo "================="

	@echo "No Cache result:"
	time ./nocache.out
	@echo "================="

	@echo "Caching result:"
	time ./caching.out
	@echo "================="

.PHONY: clean

clean:
	rm -rf *.out
