#ifndef gamepad_h
#define gamepad_h

#include "cube.h"

void gamepad_init();
void gamepad_quit();
void gamepad_controlleradded(int which);
void gamepad_controllerremoved(int which);
void gamepad_look();

#endif /* gamepad_h */
