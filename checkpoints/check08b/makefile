# CS165 Checkpoint 08B
# Written by Chad Macbeth

a.out : phone.o smartphone.o check08b.o
	g++ phone.o smartphone.o check08b.o
	tar cvf check08b.tar makefile *.cpp *.h

phone.o : phone.h phone.cpp
	g++ -c phone.cpp

smartphone.o : smartphone.h phone.h smartphone.cpp
	g++ -c smartphone.cpp

check08b.o : smartphone.h phone.h check08b.cpp
	g++ -c check08b.cpp

clean :
	rm *.o a.out *.tar

