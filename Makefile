gerak:
	g++ -std=c++11 -o Gerak Gerak.cpp Gerak.h driverGerak.cpp Point.h Point.cpp
	
world:
	g++ -std=c++11 -o world world.h world.cpp driverWorld.cpp Point.h Point.cpp moderatorMakhlukHidup.cpp administratorMakhlukHidup.cpp konduktorMakhlukHidup.cpp