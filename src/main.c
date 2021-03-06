#include "stdio.h"
#include "SDL/SDL.h"

#include "layout.h"
#include "render.h"


int main(){
	SDL_Init(SDL_INIT_EVERYTHING);
	
	SDL_Surface* screen = SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE | SDL_RESIZABLE);
	Window            w = (Window){(uint32_t*)screen->pixels, 480, 640, 0, 0, 480, 640};
	
	int cont = 1;
	while(cont){
		SDL_Event e;
		while(SDL_PollEvent(&e)){
			if(e.type == SDL_QUIT) cont = 0;
		}
		
		SDL_Flip(screen);
		SDL_Delay(16);
	}
	
	SDL_Quit();
}
