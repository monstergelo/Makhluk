/**
 *  A MakhlukHidup class. A Class that describe an organism.
 */
#ifndef MAKHLUK_HIDUP_H
#define MAKHLUK_HIDUP_H

#include "Point.h"
#include <stdlib.h>

using namespace std;

/**
 * A Global Value
 * A Point with cordinate (0,0)
 */
static Point PAwal(0,0);

class MakhlukHidup {
    public :
        /**
         * A constructor
         * Making an organism with a default value in every parameter
         */
        MakhlukHidup(int _umur = 0, char _DNA = '*', int _ulangtahun = 0, Point P = PAwal);
        /**
         * A copy constructor
         */
        MakhlukHidup(const MakhlukHidup&);
        /**
         * A destructor
         * Virtual destructor to destruct an organism
         */
         
        virtual ~MakhlukHidup();
        
        /**
         * An operator =
         */
        MakhlukHidup& operator=(const MakhlukHidup&);
        
        /**
         * A normal procedure member
         * A procedure that increase the age of the organism when this procedure called
         */ 
        void menua();
        
        /**
         * A virtual member that takes zero argument and return boolean
         * A function to check if the organism is die or not, "died" defined in the child class
         * @return boolean, true if die and false if not.
         */
        virtual bool isMati();
       
       /**
        *  A normal member procedure
        *  A procedure to display the DNA of the organism
        */
        void display();

        /**
         * A getter for umur attribute
         * @return an integer, the age of organism
         */
        int get_umur();
        
        /**
         * A getter for ulangtahun attribute ( the birthday of organism )
         * @return an integer
         */
        int get_ulang_tahun();
        
        /**
         * A getter for organism's DNA
         * @return a char
         */
        char get_DNA();
        
        /**
         * A getter for age limit of organism
         * @return an integer
         */
        int get_batas_umur();
        
        /**
         * A getter for organism Position
         * @return a point, a coordinate of organism
         */
        Point getPosisi();
        
        /**
         * A getter for organism Previous Position
         * @return a point
         */
        Point getPrecPosisi();
        
        /**
         * A getter for what is the "i"th predator in predator table
         * @param i an integer argument
         * @return a char in Predator[i]
         */
        char getPredator(int i);
        
        /**
         * A getter for predator table size
         * @return an integer
         */ 
        int getUkuranPredator();
        
        /**
         * A setter for umur
         * @param an integer arguments that will be assigned to umur
         */
		void set_umur(int);
		
		/**
         * A setter for ulangtahun
         * @param an integer arguments that will be assigned to ulangtahun
         */
        void set_ulang_tahun(int);
        
        /**
         * A setter for DNA
         * @param a char argument that will be assigned to DNA
         */
        void set_DNA(char);
        
        /**
         * A setter for Position
         * @param a Point argument that will be assigned to Position Cordinate
         */
        void setPosisi(Point);
        
        /**
         * A setter for PPosition
         * @param a Point argument that will be assigned to PPosition Cordinate
         */
        void setPrecPosisi(Point);
        
        /**
         * A setter for Predator
         * @param an integer argument for table index, this integer is always valid
         * @param a char of the predator's DNA
         */
        void setPredator(int i, char _predator);
        
        /**
         * A setter for mati
         * @param a boolean that used to tell if organism die or not
         */
        void setMati(bool _mati);
        
        /**
         * A normal member that takes one char argument and return boolean
         * @param a char of the Predator's DNA
         * @return a boolean that is true if the DNA is in the predator table and false if either.
         */
        bool isPredator(char DNA_predator);
        
        /**
         * A normal member that takes two argument and return boolean
         * @param an integer, the radius of circle
         * @param a Point of another organism
         * @return a boolean that is true if the coordinate of another organism is in the radius
         * area of this organism Position and false if either
         */
        bool isRadius (int rad, Point p);
        
        /**
         * A pure virutal member
         */
        virtual void Reaction( MakhlukHidup&)=0;

    private :
		/**
		 * An attribute that save organism's age
		 */
        int umur;
        
        /**
         * An attribute that save the birthday of organism
         */
        int ulang_tahun;
        
        /**
         * An attribute that save the DNA character of organism
         */
        char DNA;
        
        /**
         * A table attribute that contains the predator's DNA of this organism
         */
        char* predator;
        
        /**
         * An integer constant value for organism's age-limit
         */
        const int batas_umur;
        
        /**
         * A Point that contains the position of organism
         */
        Point posisi;
        
        /**
         * A Point that contains the previous position of organism
         */
        Point PPosisi;
        
        /**
         * A constant value that contains the predator table size
         */
        const int ukuran_predator;
        
        /**
         * A boolean value, used to check wheter the organism die or not
         */
        bool mati;
};

#endif // MAKHLUK_HIDUP_H
