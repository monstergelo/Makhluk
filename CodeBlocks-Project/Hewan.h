/**
 *  A Hewan class. A Class that describe a Hewan.
 */
#ifndef HEWAN_H
#define HEWAN_H

#include "MakhlukHidup.h"
#include "HuntingSkill.h"
#include "Gerak.h"

class Hewan : public MakhlukHidup, public HuntingSkill, public Gerak{
public :
    /**
	 * A constructor
	 * Making an organism with a default value in every parameter
	 */
    Hewan(int _umur = 0, char _DNA = '*', int _ulangtahun = 0, 
		Point P = PAwal, int kenyang = 0, int maks = 0, char* tar = NULL, bool _memburu = false, int k = 0, int a = 0);
    /**
	 * A copy constructor
	 */
    Hewan(const Hewan&);
    /**
	 * An operator =
	 */
    Hewan& operator=(const Hewan&);
    /**
	 * A normal procedure member
	 * A procedure that set the hunger status of the organism
	 */ 
    void setLapar();
    /**
	 * A destructor
	 * Virtual destructor to destruct an organism
	 */
    virtual ~Hewan();
    /**
	 * A setter for tingkat_kekenyangan
	 * @param an integer arguments that will be assigned to tingkat_kekenyangan
	 */
    void set_tingkat_kekenyangan(int kenyang);
    /**
	 * A setter for maks_tingkat_kekenyangan
	 * @param an integer arguments that will be assigned to maks_tingkat_kekenyangan
	 */
    void set_maks_tingkat_kekenyangan(int maks);
    /**
	 * A getter for tingkat_kekenyangan
	 * @return an integer
	 */ 
    int get_tingkat_kekenyangan();
    /**
	 * A getter for maks_tingkat_kekenyangan
	 * @return an integer
	 */ 
    int get_maks_tingkat_kekenyangan();
    /**
	 * A getter for hunger status
	 * @return a boolean
	 */ 
    bool get_lapar();
    /**
	 * A normal procedure member
	 * A procedure that processing the death of the animal
	 */  
    void hewanMati();
    /**
	 * A normal procedure member
	 * A procedure that makes animal move freely
	 */ 
    void gerak_bebas();
    /**
	 * A normal procedure member that take one argument
	 * @param A Point of the target
	 * A procedure that makes the animal hunting the target
	 */ 
    void gerak_memburu(Point Target);
    /**
	 * A normal procedure member
	 * A procedure that makes animal move in a direction that has been set
	 */ 
    void gerak_berarah();
private :
	/**
	 * An attribute that save the sated rate of the animal
	 */
    int tingkat_kekenyangan;
    /**
	 * An attribute that save the maximum sated rate of the animal 
	 */
    int maks_tingkat_kekenyangan;
    /**
	 * An attribute that save the hunger state of the animal
	 */
    bool Lapar;
};

#endif // HEWAN_H
