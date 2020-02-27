/*
 * List.cpp
 *
 *  Created on: May 22, 2016
 *      Author: raydelto
 */

#include "List.h"
#include <iostream>
#include <cstdlib>
using namespace std;

List::List(): _first(NULL), _last(NULL), _count(0)
{


}

void List::getall(string* items)
{
	int counter = 0;

	for(Element* next = _first; next != NULL ; next = next->_next)
		items[counter++] = next -> _name;
}

int List::getcount() {
	return _count;
}

void List::add(string name)
{
	//TODO: Implement this method
	//cout << "You should write the code for adding " << element -> _name << endl;

	Element* element = new Element(name);

	if(_first == NULL)
		_first = _last = element;

	else
	{
		_last -> _next = element;
		_last = element;
	}

	_count++;
}

void List::remove(int index)
{
	//TODO: Implement this method
	//cout << "You should write the code for removing the index " << index << endl;

	if(_count == 0)
	{
		cout << "* The list is empty already *" << endl;
		return;
	}
	else if(index >= _count)
	{
		cout << "* Position out of bounds *" << endl;
		return;
	}

	/*Element* todel = _first;
	Element* before = NULL;
	Element* after;

	for(int x = 1; x < index; x++)
	{
		if(todel->_next == NULL && x < index - 1)
		{
			cout << "Error: position out of bounds" << endl;
			return;
		}

		before = todel;
		todel = todel->_next;
	}
	after = todel->_next;

	//todel->_next = NULL;
	//todel->_name = NULL;
	//delete todel;

	before->_next = after;*/

	Element* before = NULL;
	Element* elem = _first;
	Element* after = NULL;

	for(int x = 0; x < index; x++)
	{
		before = elem;
		elem = elem->_next;
	}

	after = elem->_next;

	if(before != NULL)
		before->_next = after;
	else
		_first = after;

	if(after == NULL)
		after = before;

	delete elem;

	_count--;

	cout << "* Deleted *" << endl;
}
