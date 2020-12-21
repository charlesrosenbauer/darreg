#include "render.h"
#include "layout.h"


Window subWindow(Window w, int x, int y){
	Window ret;
	ret.pixels = w.pixels;
	ret.h      = w.h;
	ret.w      = w.w;
	
	ret.wx     = w.wx + x;
	ret.wy     = w.wy + y;
	
	ret.wh     = w.wh;
	ret.ww     = w.ww;
	if(ret.wh + ret.wy > w.wh) ret.wh = w.wh - ret.wy;
	if(ret.ww + ret.wx > w.ww) ret.ww = w.ww - ret.wx;
	
	return ret;
}



void drawPanel(Panel p, Window window){
	if(!p.edited) return;
	
	Window sub = subWindow(window, p.x, p.y);
	
	
	switch(p.type){
		case PT_CANVAS  :{
			// Fill in pixels within window
		}break;
		
		case PT_TEXTBOX :{
			// Display text within box
		}break;
		
		case PT_DIVIDER :{
			// Divides window into several subpanels and draws panels within
		}break;
	
		default: break;
	}
}
