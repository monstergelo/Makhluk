#ifndef POINT_H
#define POINT_H

/**
 * A Point Class, A Class to describe a Point in Cartesian Diagram
 */
class Point {

	public :
		/**
		 * A ctor that construct A Point with cordinate(0,0)
		 */
		Point();
		/**
		 * A ctor that construct A Point with a random cordinate that range from 0 to range
		 * @param an integer, a range to random
		 */
		Point(int range);
		/**
		 * A ctor that construct A Point with absis = _x and ordinate = _y
		 * @param an integer for the absis
		 * @param an integer for the ordinate
		 */
		Point(int _x, int _y);
		/**
		 * An operator=
		 */
		Point& operator=(const Point&);

		/**
		 * An operator==
		 */
		bool operator==(const Point&);
		
		/**
		 * A member procedure to make a point move tc x+dx and y+dy
		 * @param an integer for dx
		 * @param an integer for dy
		 */
		void geser(int dx, int dy);

		/**
		 * Get the absis of the Point
		 * @return an integer
		 */
		int getAbsis();
		/**
		 * Get the ordinate of the Point
		 * @return an integer
		 */
		int getOrdinat();

		/**
		 * Set the absis
		 * @param an integer
		 */
		void setAbsis(int _x);
		/**
		 * Set the ordinate
		 * @param an integer
		 */
		void setOrdinat(int _y);

	private :
		/* An attribute to store the absis of the Point */
		int x;
		/* An attribute to store the ordinate of the Point */
		int y;
};

#endif
