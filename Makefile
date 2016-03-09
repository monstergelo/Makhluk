gerak:
	g++ -std=c++11 -o Gerak Gerak.cpp Gerak.h driverGerak.cpp Point.h Point.cpp
	
world:
	g++ -std=c++11 -o world world.h world.cpp driverWorld.cpp Point.h Point.cpp moderatorMakhlukHidup.cpp administratorMakhlukHidup.cpp konduktorMakhlukHidup.cpp Manusia.cpp MakhlukHidup.cpp HuntingSkill.cpp Gerak.cpp Polisi.cpp
	
konduktor:
	g++ -std=c++11 -o driverKon konduktorMakhlukHidup.h konduktorMakhlukHidup.cpp driverKonduktor.cpp Manusia.cpp Gerak.cpp MakhlukHidup.cpp Point.cpp HuntingSkill.cpp

admin:
	g++ -std=c++11 -o driverAdmin administratorMakhlukHidup.cpp administratorMakhlukHidup.h driverAdmin.cpp Herbivora.cpp Herbivora.h Hewan.cpp Gerak.cpp HuntingSkill.cpp MakhlukHidup.cpp Point.cpp

karnivora :
	g++ -std=c++11 -o driverKarnivora driverKarnivora.cpp Karnivora.cpp Hewan.cpp Gerak.cpp HuntingSkill.cpp MakhlukHidup.cpp Point.cpp

herbivora:
	g++ -std=c++11 -o driveHer driverHerbivora.cpp Herbivora.cpp MakhlukHidup.cpp Hewan.cpp HuntingSkill.cpp Gerak.cpp Point.cpp
	
MakhlukKarnivora :
	g++ -std=c++11 -o MakhlukKarnivora driverMakhlukKarnivora.cpp Harimau.cpp Hyena.cpp Karnivora.cpp Hewan.cpp Gerak.cpp HuntingSkill.cpp MakhlukHidup.cpp Point.cpp
	
omnivora:
	g++ -std=c++11 -o driverOmnivora driverOmnivora.cpp Omnivora.cpp MakhlukHidup.cpp Hewan.cpp HuntingSkill.cpp Gerak.cpp Point.cpp	

gajah:
	g++ -std=c++11 -o driverGajah driverGajah.cpp Gajah.cpp Herbivora.cpp MakhlukHidup.cpp Hewan.cpp HuntingSkill.cpp Gerak.cpp Point.cpp
burung:
	g++ -std=c++11 -o driverBurung driverBurungUnta.cpp BurungUnta.cpp Herbivora.cpp MakhlukHidup.cpp Hewan.cpp HuntingSkill.cpp Gerak.cpp Point.cpp
tumbuhan:
	g++ -std=c++11 -o driverT driverTumbuhan.cpp Tumbuhan.cpp Point.cpp MakhlukHidup.cpp
rumput:
	g++ -std=c++11 -o driverr driverRumput.cpp Rumput.cpp Tumbuhan.cpp Point.cpp MakhlukHidup.cpp
pohon:
	g++ -std=c++11 -o driverp driverPohon.cpp Pohon.cpp Tumbuhan.cpp Point.cpp MakhlukHidup.cpp
