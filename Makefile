all:
	clang++ -std=c++14 -O2 -W -Wall -Wextra -Wno-unused-parameter test.cpp -o test

clean:
	rm -f test *.o

run:
	./test
