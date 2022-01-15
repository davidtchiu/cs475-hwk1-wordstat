/*
 * menu.h
 *
 *  Created on: Jun 16, 2015
 *      Author: dchiu
 */

#ifndef MENU_H_
#define MENU_H_

//constants
#define MENU_VC 1    /** print vowel/consonant counts */
#define MENU_WC 2    /** print word count */
#define MENU_HISTO 3 /** print histogram */
#define MENU_RET 4   /** return to input */
#define MENU_EXIT 5  /** quit */

//function declarations
int getMenuOption();

#endif /* MENU_H_ */
