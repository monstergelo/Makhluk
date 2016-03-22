#ifndef OMNIVORA_H
#define OMNIVORA_H

#include "Hewan.h"
/**
 *  A Omnivora class. A Class that describe a Carnivore Animals.
 */
class Omnivora : public Hewan {
    public :
		/**
         * A constructor
         * Making a carnivore animals with a default value in every parameter
         */
        Omnivora();
        /**
         * A constructor that take 10 parameter
         * @param an integer for the age limit of the omnivore
         * @param a character of the omnivore's DNA
         * @param an integer "birthday" that saves the birthday time for omnivore
         * @param a Point that tells the position of the omnivore
         * @param an integer that set "tingkat_kekenyangan"
         * @param an integer that set "maks_tingkat_kekenyangan"
         * @param a character pointer that contain prey of the carnivore
         * @param a boolean, the hunting state of the omnivore
         * @param an integer k, contain the omnivore velocity
         * @param an integer a, contain the omnivore first move default direction
         */
        Omnivora(int _umur, char _DNA,
                  int _ulangtahun, Point P,
                  int kenyang, int maks,
                  char* tar, bool _memburu,
                  int k, int a);

        /**
         * A copy constructor
         */
        Omnivora(const Omnivora&);
        /**
         * A destructor
         */
        ~Omnivora();
        /**
         * An operator=
         */
        Omnivora& operator=(const Omnivora&);
        /**
         * A member procedure
         * A process that make the age of the omnivore decrease by one
         */
        void memuda();
        /**
         * A function to check whether the organism is plant or not
         * @param a MakhlukHidup
         * @return a boolean
         */
        bool isTumbuhan(MakhlukHidup&);
        /**
         * A procedure that make the omnivore react to the other MakhlukHidup
         * @param MakhlukHidup
         */
        void Reaction(MakhlukHidup&);
};

#endif // OMNIVORA_H
