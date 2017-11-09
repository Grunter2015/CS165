###############################################################
# Program:
#     Checkpoint 06a, Makefiles
#     Brother Macbeth, CS165
# Author:
#     Chad Mcabeth
# Summary:
#     Summaries are not necessary for checkpoint assignments.
###############################################################


a.out: robot.o point.o check06a.o
	g++ robot.o point.o check06a.o

robot.o: robot.cpp robot.h point.h
	g++ -c robot.cpp

point.o: point.cpp point.h
	g++ -c point.cpp

chek06a.o: check06a.cpp robot.h
	g++ -c check06a.cpp

