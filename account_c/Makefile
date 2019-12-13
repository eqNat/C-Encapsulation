account: main.o account.o
	gcc -o account main.o account.o

main.o: main.c account.h
	gcc -c main.c

account.o: account.c account.h
	gcc -c account.c
