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
	delete curr;
}

void linkedList::AddLast(MakhlukHidup *m1)
{
	if(next == NULL)
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
		linkedList *l1 = prev;
		linkedList *l2 = next;

		if(l1 != NULL)
		{
			l1->SetNext(l2);
		}

		if(l2 != NULL)
		{
			l2->SetPrev(l1);
		}

		delete this;
	}
}

MakhlukHidup* linkedList::retrieve(int i)
{
	Point P(1,1);
	MakhlukHidup *m1 = new Polisi(P);// = NULL;
	return m1;
	if(i > 0)
	{
		cout << "wa";
		if(GetNext() != NULL)
			return next->retrieve(i-1);
		else
			return NULL;
	}
	else
	{
		cout << "wi";
		//return curr;
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