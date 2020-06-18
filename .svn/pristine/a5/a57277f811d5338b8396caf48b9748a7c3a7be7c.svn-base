#
#Nafees' Makefile code
#

tests: test_def test_int
	./test_def
	./test_int

test_def: bigint.o test_default_ctor.cpp
	clang++ bigint.o test_default_ctor.cpp -o test_def

test_int: bigint.o test_int_ctor.cpp
	clang++ bigint.o test_int_ctor.cpp -o test_def

remove: 
	rm *.o
	rm *test_def
	rm *test_int


