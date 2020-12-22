#ifndef __LAYOUT_HEADER__
#define __LAYOUT_HEADER__


#include "stdint.h"



typedef struct{
	uint32_t* pixels;
}Canvas;

typedef struct{
	char*     text;
	uint32_t  backColor, textColor;
}TextBox;

typedef struct{
	void**    list;
	int       listsize;
	int       orientation;
}Divider;

typedef union{
	Canvas    cvs;
	TextBox   txt;
	Divider   div;
}PanelUnion;

typedef enum{
	PT_CANVAS,
	PT_TEXTBOX,
	PT_LISTBOX,
	PT_DIVIDER
}PanelType;

typedef struct{
	PanelUnion panel;
	PanelType  type;
	
	int x, y, h, w, edited;
}Panel;


typedef struct{
	uint32_t* pixels;
	int h, w, wx, wy, wh, ww;
}Window;



Window makeWindow(uint32_t*, int, int);


#endif
