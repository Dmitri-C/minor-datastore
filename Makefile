
TEST_SOURCES := $(shell find ./src -name 'test*.cpp')

SOURCES := src/configreader.cpp src/dataoutput.cpp src/dbconn.cpp src/fileconn.cpp

all:
	
	g++ -Wall -I/usr/include/cppconn -o program main.cpp -L/usr/lib -lmysqlcppconn -ljsoncpp

test:
	g++ -I/usr/include/cppconn -o test $(TEST_SOURCES) $(SOURCES) -L/usr/lib -lmysqlcppconn -ljsoncpp

clean: 
	rm -f test && rm -f program