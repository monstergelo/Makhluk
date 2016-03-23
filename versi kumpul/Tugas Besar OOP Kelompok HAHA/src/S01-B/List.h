#include "MakhlukHidup.h"
#include "Point.h"
/**
 *  Class for constructing a Linked List /*
 */
class linkedList
{
public:
	/**
	 * A constructor for Linked List
	 */
	linkedList();
	/**
	 * A constructor for Linked List that takes one argument
	 * @param A list of makhluk hidup
	 */
	linkedList(MakhlukHidup*);
	/**
	 * A destructor
	 */
	~linkedList();
	
	/**
	 * A member procedure to Add a Makhluk hidup at the last of the list
	 * @param a pointer to Makhluk Hidup
	 */
	void AddLast(MakhlukHidup*);
	
	/**
	 * A member procedure to Delete a member in list in a certain index
	 * @param an integer
	 */
	void Del(int);
	
	/**
	 * A member function to get a pointer of Makhluk Hidup in a certain index
	 * @param an integer
	 * @return a pointer to Makhluk Hiudp
	 */
	MakhlukHidup* retrieve(int);
	
	/**
	 * A setter to set the current Makhluk Hidup in List
	 * @param a pointer to MakhlukHidup
	 */
	void SetCurr(MakhlukHidup*);
	
	/**
	 * A setter to set the next value of the List
	 * @param a linked List
	 */
	void SetNext(linkedList*);
	
	/**
	 * A setter to set the previous of the List
	 * @param a linked List
	 */
	void SetPrev(linkedList*);
	
	/**
	 * Get the next value
	 * @return linkedList
	 */
	linkedList* GetNext();
	
	/**
	 * Get the previous value
	 * @return linkedList
	 */
	linkedList* GetPrev();
	
	/**
	 * Get the current Makhluk Hidup
	 * @return an address of Makhluk Hidup
	 */
	MakhlukHidup* GetCurr();

private:
	/* An attribute that contain the Makhluk Hidup in List */
	MakhlukHidup *curr;
	/* An attribute that contain Next Address of the List */
	linkedList *next;
	/* An attribute that contain Previous Address in List */
	linkedList *prev;
};

