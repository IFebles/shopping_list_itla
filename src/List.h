/*
 * List.h
 *
 *  Created on: May 22, 2016
 *      Author: raydelto
 */

#ifndef LIST_H_
#define LIST_H_
#include "Element.h"
class List
{
	public:
		List();
		void add(std::string);
		void remove(int index);
		void getall(std::string*);
		int getcount();
		int _count;
	private:
		Element* _first;
		Element* _last;
};

#endif /* LIST_H_ */
