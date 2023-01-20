/*
 * menu.h
 *
 *  Created on: Jun 16, 2015
 *      Author: dchiu
 */

#ifndef MENU_H_
#define MENU_H_

// constants
#define MENU_STATS 1 /** print word count */
#define MENU_HISTO 2 /** print histogram */
#define MENU_INPUT 3 /** return to inputting strings */
#define MENU_EXIT 4  /** quit */

// function declarations for the menu below
int getMenuOption();

#endif /* MENU_H_ */
