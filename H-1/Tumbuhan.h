#ifndef TUMBUHAN_H
#define TUMBUHAN_H

#include "MakhlukHidup.h"
/**
 *  A Tumbuhan class. A Class that describe a Plant.
 */
class Tumbuhan : public MakhlukHidup {
	public:
		/*
		 * A constructor with 5 parameter
		 * @param an integer for the age limit of the animal
		 * @param a character of the carnivore's DNA
		 * @param an integer "birthday" that saves the birthday time for animal
		 * @param a Point that tells the position of the Carnivore
		 * @param a List of char that contain the predator of the plant
		 * */
		Tumbuhan(int=0 , char='*' , int=0 , Point=PAwal ,char* predators=NULL);
		/**
		 * A virtual destructor
		 */
		virtual ~Tumbuhan();
		/**
		 * A copy constructor
		 */
		Tumbuhan(const Tumbuhan&);
		/**
		 * An operator=
		 */
		Tumbuhan& operator=(const Tumbuhan&);
		/**
		 * A virtual member procedure
		 * Process Reaction make plant react to the other organism
		 */
		virtual void Reaction(MakhlukHidup&);
};

#endif
