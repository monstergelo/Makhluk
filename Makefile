gerak:
	g++ -std=c++11 -o Gerak Gerak.cpp Gerak.h driverGerak.cpp Point.h Point.cpp
	
world:
	g++ -std=c++11 -o world world.h world.cpp driverWorld.cpp Point.h Point.cpp moderatorMakhlukHidup.cpp administratorMakhlukHidup.cpp konduktorMakhlukHidup.cpp Manusia.cpp MakhlukHidup.cpp HuntingSkill.cpp Gerak.cpp
	
konduktor:
	g++ -std=c++11 -o driverKon konduktorMakhlukHidup.h konduktorMakhlukHidup.cpp driverKonduktor.cpp Manusia.cpp Gerak.cpp MakhlukHidup.cpp Point.cpp HuntingSkill.cpp
