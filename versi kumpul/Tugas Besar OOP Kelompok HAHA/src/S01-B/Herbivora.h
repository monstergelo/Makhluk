#ifndef HERBIVORA_H
#define HERBIVORA_H

#include "Hewan.h"

/**
 *  Class that describes Herbivore animals.
 */

//Catatan : Hewan inherit ke MakhlukHidup, Gerak, dan HuntingSkill
class Herbivora : public Hewan {
public:
    /**
     *  constructor with no parameter
     */
    Herbivora();
     /**
	 * A constructor that take 12 parameter
	 * @param an integer for the age limit of the herbivore
	 * @param a character of the herbivore's DNA
	 * @param an integer "birthday" that saves the birthday time for herbivore
	 * @param a Point that tells the position of the Hernivore
	 * @param an integer that set "tingkat_kekenyangan"
	 * @param an integer that set "maks_tingkat_kekenyangan"
	 * @param a character pointer that contain prey of the herbivore
	 * @param a boolean, the hunting state of the herbivore
	 * @param an integer k, contain the herbivore velocity
	 * @param an integer a, contain the herbivore first move default direction
	 * @param a boolean, the state that the tell whether the herbivore is slowed or not
	 * @param an integer that contain the acceleration of the herbivore
	 */
    Herbivora(int _umur, char _DNA, 
              int _ulangtahun, Point P, 
              int kenyang, int maks, 
              char* tar, bool _memburu, 
              int k, int a, 
              bool lambat, int delta);
    /**
     *  A copy constructor
     */
    Herbivora(const Herbivora&);
    /**
     *  an operator=
     */
    Herbivora& operator=(const Herbivora&);
    /**
     *  a virtual destructor
     */
    virtual ~Herbivora();
    /**
     *  set the state of the Herbivore to Accelerated or not
     */
    void set_percepat( bool cepat);
    /**
     *  set the acceleration
     */
    void set_deltaKecepatan(int kec);
    /**
     *  get the state of the Herbivore
     *  @param a boolean, true if the Herbivore is accelerated
     */
    bool get_percepat();
    /**
     *  get the acceleration
     * 	@return an integer
     */
    int get_deltaKecepatan();
    /**
     *  a procedure to simulate how the herbivore move faster
     */
    void prosesMempercepat();
    /**
     *  a procedure that makes herbivore react to its environment
     * 	Herbivore can eat, or going faster to flee away from its predator
     * 	@param a MakhlukHidup, another MakhlukHidup near the Herbivore
     */
    virtual void Reaction(MakhlukHidup&);
private:
    /**
     *  Store information how fast the Herbivore got to be.
     */
    int deltaKecepatan;
    /**
     *  Store information is Herbivore need to get faster or not.
     */
    bool percepat;
};


#endif // HERBIVORA_H
