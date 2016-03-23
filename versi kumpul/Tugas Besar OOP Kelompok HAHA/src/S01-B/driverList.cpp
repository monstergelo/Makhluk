#include "List.h"
#include "Point.h"
#include "Polisi.h"


int main()
{
	Point P1(1,1);
	Polisi m1(P1);
	Point P2(2,2);
	Polisi m2(P2);

	linkedList l1(&m1);
	l1.AddLast(&m2);
	cout << "Wawa";

	l1.retrieve(2);
	cout << "Wiwiw";

	return 0;
}