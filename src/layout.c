#include "stdint.h"

#include "layout.h"



Window makeWindow(uint32_t* pixels, int h, int w){
	return (Window){pixels, h, w, 0, 0, h, w};
}

