/*
 * Menu.h
 *
 *  Created on: May 22, 2016
 *      Author: raydelto
 */

#ifndef MENU_H_
#define MENU_H_
#include "List.h"

class Menu
{
	private:
		void clearScreen();
		void listItems();
		void addItems();
		void removeItems();
		bool validate(int option);
		void routeAction(int option);
		void pause();
		List* mylist;
	public:
		Menu();
		~Menu();
		void show();
};

#endif /* MENU_H_ */
