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
}ListBox;

typedef union{
	Canvas    cvs;
	TextBox   txt;
	ListBox   lst;
}PanelUnion;

typedef enum{
	PT_CANVAS,
	PT_TEXTBOX,
	PT_LISTBOX
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



#endif
