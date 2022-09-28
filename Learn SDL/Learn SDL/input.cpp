#include "input.h"

void Input::beginNewFrame() {
	_pressedKeys.clear();
	_releasedkeys.clear();
}

void Input::keyDownEvent(const SDL_Event& event) {
	_pressedKeys[event.key.keysym.scancode] = true;
	_heldKeys[event.key.keysym.scancode] = true;
}

void Input::keyUpEvent(const SDL_Event& event) {
	_releasedkeys[event.key.keysym.scancode] = true;
	_heldKeys[event.key.keysym.scancode] = true;
}

bool Input::wasKeyPressed(const SDL_Scancode key) {
	return _pressedKeys[key];
}

bool Input::wasKeyReleased(const SDL_Scancode key) {
	return _releasedkeys[key];
}

bool Input::isKeyHeld(const SDL_Scancode key) {
	return _heldKeys[key];
}