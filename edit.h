/*
 * edit.h - 
 * 
 * Released into the public domain
 */

#ifndef EDIT_H
#define EDIT_H

extern int editList(int *pVal, char **values, int x, int y);
extern int editUnsigned(int *pVal, int min, int max, int LCD_X, int LCD_Y);
extern void setDateAndTime();

#endif
