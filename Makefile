GTEST_DIR = /usr/local
GTEST_LIB = $(GTEST_DIR)/lib/libgtest.a
GTEST_INCLUDE = -I$(GTEST_DIR)/include

all	:MAIN TEST

MAIN	:main.o heapsort.o
	 g++ -Wall -o MAIN main.o heapsort.o

TEST	:test.o heapsort.o
	g++ -Wall -o TEST test.o heapsort.o $(GTEST_LIB) -lpthread

main.o	:main.cpp heapsort.h
	 g++ -Wall -c main.cpp

test.o	:test.cpp heapsort.h
	g++ -Wall -c test.cpp

heapsort.o	:heapsort.cpp heapsort.h
	g++ -Wall -c heapsort.cpp

clean	:
	rm *.o MAIN TEST 