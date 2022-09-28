#include "SDL.h"
#include "graphics.h"

/* Graphics Class
* Hold all information dealing with graphics for the game
*/

Graphics::Graphics() {
	SDL_CreateWindowAndRenderer(640, 480, 0, &_window, &_renderer);
	SDL_SetWindowTitle(_window, "Cave Story");
}

Graphics::~Graphics() {
	SDL_DestroyWindow(_window);
}