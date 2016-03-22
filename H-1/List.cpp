#include "List.h"
#include <iostream>

using namespace std;

linkedList::linkedList()
{
	curr = NULL;
	next = NULL;
	prev = NULL;
}

linkedList::linkedList(MakhlukHidup *m1)
{
	curr = m1;
	next = NULL;
	prev = NULL;
}

linkedList::~linkedList()
{

}

void linkedList::AddLast(MakhlukHidup *m1)
{
	if(curr == NULL)
	{
		curr = m1;
	}
	else if(next == NULL)
	{
		linkedList *l1 = new linkedList(m1);
		next = l1;		
	}
	else
	{
		next->AddLast(m1);
	}
}

void linkedList::Del(int i)
{
	if(i > 0)
	{
		next->Del(i-1);
	}
	else
	{
		curr = NULL;
	}
}

MakhlukHidup* linkedList::retrieve(int i)
{
	if(i > 0)
	{
		if(GetNext() != NULL)
			return next->retrieve(i-1);
		else
			return NULL;
	}
	else
	{
		return curr;
	}
}

linkedList linkedList::GetIndex(int i)
{
	if(i > 0)
	{
		if(GetNext() != NULL)
			return next->GetIndex(i-1);
		else
			return NULL;
	}
	else
	{
		return *this;
	}
}

void linkedList::SetCurr(MakhlukHidup* m1)
{
	curr = m1;
}
void linkedList::SetNext(linkedList* l1)
{
	next = l1;
}
void linkedList::SetPrev(linkedList* l1)
{
	prev = l1;
}

linkedList* linkedList::GetNext()
{
	return next;
}
linkedList* linkedList::GetPrev()
{
	return prev;
}
MakhlukHidup* linkedList::GetCurr()
{
	return curr;
}

/*
int main()
{
	Point P1(1,1);
	Polisi m1(P1);
	Point P2(2,2);
	Pemburu m2(P2);

	linkedList l1(&m1);
	l1.AddLast(&m2);
	
	cout << l1.GetCurr()->get_DNA() << endl;
	l1 = *l1.GetNext();
	cout << l1.GetCurr()->get_DNA() << endl;
	return 0;
}*/