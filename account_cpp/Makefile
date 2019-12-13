account: main.o account.o
	g++ -o account main.o account.o

main.o: main.cpp account.h
	g++ -c main.cpp

account.o: account.cpp account.h
	g++ -c account.cpp
