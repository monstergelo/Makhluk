
#include "Polisi.h"
#include "Point.h"

class linkedList
{
public:
	linkedList();
	linkedList(MakhlukHidup*);
	~linkedList();

	void AddLast(MakhlukHidup*);
	void Del(int);
	MakhlukHidup* retrieve(int);

	void SetCurr(MakhlukHidup*);
	void SetNext(linkedList*);
	void SetPrev(linkedList*);

	linkedList* GetNext();
	linkedList* GetPrev();
	MakhlukHidup* GetCurr();

private:
	MakhlukHidup *curr;
	linkedList *next;
	linkedList *prev;
};

