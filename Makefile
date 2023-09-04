GTEST_DIR = /usr/local
GTEST_LIB = $(GTEST_DIR)/lib/libgtest.a
GTEST_INCLUDE = -I$(GTEST_DIR)/include

all	:MAIN TEST

MAIN	:main.o heapsort.o
	 g++ -Wall -o MAIN main.o heapsort.o

TEST	:heapsort_test.o heapsort.o
	g++ -Wall -o TEST heapsort_test.o heapsort.o $(GTEST_LIB) -lpthread

main.o	:main.cpp heapsort.h
	 g++ -Wall -c main.cpp

test.o	:heapsort_test.cpp heapsort.h
	g++ -Wall -c heapsort_test.cpp

heapsort.o	:heapsort.cpp heapsort.h
	g++ -Wall -c heapsort.cpp

clean	:
	rm *.o MAIN TEST 