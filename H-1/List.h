#ifndef LIST_H_
#define LIST_H_

#include "MakhlukHidup.h"
class linkedList
{
public:
	linkedList();
	linkedList(MakhlukHidup*);
	~linkedList();

	void AddLast(MakhlukHidup*);
	void Del(int);
	MakhlukHidup* retrieve(int);
	linkedList GetIndex(int);

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

#endif