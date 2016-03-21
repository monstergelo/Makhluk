/**
 *  A Hewan class. A Class that describe a Carnivore Animals.
 */
#ifndef KARNIVORA_H
#define KARNIVORA_H

#include "Hewan.h"

class Karnivora : public Hewan {
    public :
        /**
         * A constructor
         * Making a carnivore animals with a default value in every parameter
         */
        Karnivora();
        /**
         * A constructor that take 12 parameter
         * @param an integer for the age limit of the carnivore
         * @param a character of the carnivore's DNA
         * @param an integer "birthday" that saves the birthday time for carnivore
         * @param a Point that tells the position of the Carnivore
         * @param an integer that set "tingkat_kekenyangan"
         * @param an integer that set "maks_tingkat_kekenyangan"
         * @param a character pointer that contain prey of the carnivore
         * @param a boolean, the hunting state of the carnivore
         * @param an integer k, contain the carnivore velocity
         * @param an integer a, contain the carnivore first move default direction
         * @param a boolean, the state that the tell whether the carnivore is slowed or not
         * @param an integer that contain the acceleration of the carnivore
         */
        Karnivora(int _umur,
                  char _DNA,
                  int _ulangtahun,
                  Point P,
                  int kenyang,
                  int maks,
                  char* tar,
                  bool _memburu,
                  int k,
                  int a,
                  bool lambat,
                  int delta);

        /**
         * A copy constructor
         */
        Karnivora(const Karnivora&);
        /**
         * An operator=
         */
        Karnivora& operator=(const Karnivora&);
         /**
         * A destructor
         * Virtual destructor to destruct a carnivore
         */
        ~Karnivora();
		/**
		 * A setter for slowed status
		 * @param a boolean arguments that will be assigned to true if the carnivore want to be slowed
		 */
        void setMelambat( bool lambat);
        /**
		 * A setter for the carnivore acceleration
		 * @param an integer arguments that will be assigned to true if the carnivore want to be slowed
		 */
        void setDeltaKecepatan(int delta);
        /**
		 * A getter for slowed status
		 */
        bool getMelambat();
        /**
		 * A getter for acceleration of the carnivore
		 */
        int getDeltaKecepatan();
        /**
        *  A normal member procedure
        *  A procedure to make the animal slowed
        */
        void prosesMelambat();
        /**
        *  A normal member procedure that take 1 arguments
        *  A procedure that makes carnivore react to an organism input
        *  @param an organism
        */
        void Reaction(MakhlukHidup&);
    private :
		/**
		 * An attribute that save the acceleration of movement.
		 */
        int deltaKecepatan;
        /**
         * A boolean value, used to check wheter the carnivore slowed or not
         */
        bool melambat;

};

#endif // KARNIVORA_H
