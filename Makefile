

all:
	
	g++ -Wall -I/usr/include/cppconn -o program main.cpp -L/usr/lib -lmysqlcppconn -ljsoncpp