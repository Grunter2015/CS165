###############################################################
# Program:
#     Airline Program
# Author:
#     Chad Macbeth
# Summary:
#     Build Rules
###############################################################


a.out: Driver.o Trip.o Passenger.o Rewards.o Flight.o 
	g++ Driver.o Trip.o Passenger.o Rewards.o Flight.o 

Driver.o: Driver.cpp Trip.h Passenger.h Flight.h
	g++ -c Driver.cpp

Trip.o: Trip.cpp Trip.h Passenger.h Flight.h
	g++ -c Trip.cpp

Passenger.o: Passenger.cpp Passenger.h Rewards.h
	g++ -c Passenger.cpp

Rewards.o: Rewards.cpp Rewards.h
	g++ -c Rewards.cpp

Flight.o: Flight.cpp Flight.h
	g++ -c Flight.cpp


