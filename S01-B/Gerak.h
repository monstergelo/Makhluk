#ifndef GERAK_H
#define GERAK_H

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "Point.h"

#define U 1 //Utara
#define TL 2 //Timur Laut
#define T 3 //Timur
#define TG 4 //Tenggara
#define S 5 //Selatan
#define BD 6 //Barat Daya
#define B 7 //Barat
#define BL 8 //Barat Laut

/**
 * A gerak class. A class that describe a movement. 
 */

class Gerak {
public :

    /**
     * A constructor.
     * Making a movement with default parameter value in every parameter.
     * @param k A parameter that will be assign to direction.
     * @param a A parameter that will be assign to velocity.
     */
    Gerak(int k= 0, int a=0);

    /**
     * An Operator =
     */
    Gerak& operator= (const Gerak&);
    
    /**
     * A movement function returns a new cordinate.
     * This movement use random direction. It just can move in one block.
     * @param Awal Awal parameter that describe the first cordinate.
     * @return a Point, new cordinate 
     */
    Point gerak_bebas(Point Awal);
    
    /**
     * A movement function returns a new cordinate.
     * This movement use direction which close to target. It just can move in one block
     * @param Awal parameter that describe the first cordinate.
     * @param Target Target parameter that describe the cordinate of target.
     * @return a Point, new cordinate
     */
    Point gerak_memburu(Point Awal, Point Target);
    
    /**
     * A movement function returns a new cordinate.
     * This movement use direction which away from target. It just can move in one block
     * @param Awal parameter that describe the first cordinate.
     * @param Predator parameter that describe the cordinate of predator.
     * @return a Point, new cordinate
     */
    Point gerak_menjauh(Point Awal, Point Predator);
    
    /**
     * A movement function returns a new cordinate.
     * This movement use direction which get from attribute. It just can move in one block
     * @param Awal Awal parameter that describe the first cordinate.
     * @return a Point, new cordinate
     */
    Point gerak_berarah(Point Awal);

    /**
    * A setter for Kecepatan.
    * @param a int argument that will be assigned to velocity.
    */
    void set_Kecepatan(int _kecepatan);
    
    /**
     * A setter for Arah.
     * @param a int argument that will be assigned to dircetion.
     * It has value between 1 to 8.
     */
    void set_Arah(int _arah);
    
    /**
     * A setter for Arah.
     * Set direction attribute with random integer which has value between 1 to 8.
     */
    void set_Arah_Bebas();
    
    /**
     * A setter for Arah.
     * Set direction attribute with integer which references direction from origin to destination
     * @param Awal A point argument describe the origin
     * @param Target A point argument describe the destination.
     */
    void set_Arah_Memburu(Point Awal, Point Target);
    
    /**
     * A setter for Arah.
     * Set direction attribute with integer which references direction which away from predator
     * @param Awal A point argument describe the origin
     * @param Predator A point argument describe the predator.
     */
    void set_Arah_Menjauh(Point Awal, Point Predator);

    /**
     * A getter for Kecepatan
     * @return an integer, velocity
     */
    int get_Kecepatan();
    
    /**
     * A getter for Kecepatan
     * @return an integer, direction
     */
    int get_Arah();

private :
	/**
	 * An attribute that save velocity of movement.
	 */
	int kecepatan;
    /**
	 * An attribute that save direction of movement.
	 */
    int arah;
};

#endif // GERAK_H
