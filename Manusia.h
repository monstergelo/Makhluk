#ifndef MANUSIA_H
#define MANUSIA_H

#include "MakhlukHidup.h"
#include "HuntingSkill.h"
#include "Gerak.h"
/**
 *  A Manusia Class. A Class that describe Human.
 * This class inherit from MakhlukHidup class, HuntingSkill class and Gerak class.
 */
class Manusia : public MakhlukHidup, public HuntingSkill, public Gerak {
public :

    /**
     * A Constructor.
     * It use default parameters.
     * @see MakhlukHidup
	 * @see HuntingSkill
	 * @see Gerak
     */

    Manusia(int _umur = 0, char _DNA = '*', int _ulangtahun = 0, Point P = PAwal, char* Target = NULL, bool _memburu = false, int kec = 0, int arah = 0);

    /**
     * A Copy Constructor.
     */
    Manusia(const Manusia&);

    /**
     * An Operator =
     */
    Manusia& operator= (const Manusia&);

	/**
	 * Setter procedure for menghindar attribute
	 * @param m A first parameter will be assigned in menghindar atrribute
	 */
    void setMenghindar(bool m);

    /**
     * Getter function for menhindar attribute
     * @return menghindar attribute
     */
    bool getMenghindar ();

	/**
     * A procedure changes posisi attribute and PPosisi atrribute.
     * It uses random direction.
     * @see Gerak#gerak_bebas()
     */
    void gerak_bebas();

    /**
     * A procedure changes posisi attribute and PPosisi atrribute.
     * It uses direction that away from Predator.
     * @param Predator A parameter that passing the predator position.
     * @see Gerak#gerak_menjauh()
     */
    void gerak_menjauh(Point Predator);

    /**
     * A procedure changes posisi attribute and PPosisi atrribute.
     * It uses direction that close to Target.
     * @param Target A parameter that passing the target position.
     * @see Gerak#gerak_memburu()
     */
    void gerak_memburu(Point Target);

    /**
     * A procedure changes posisi attribute and PPosisi atrribute.
     * It uses direction that assigned by _arah.
     * @see Gerak#gerak_berarah()
     */
    void gerak_berarah();

private :
    /**
     * A private attribute.
     * It stores the dodge condition.
     */
    bool menghindar;


};
#endif // MANUSIA_H
