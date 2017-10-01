#pragma once
#include "app.hpp"
#include <GL/glew.h>
#include <GLFW/glfw3.h>


namespace rack {


#ifdef ARCH_MAC
	#define GUI_MOD_KEY_NAME "Cmd"
#else
	#define GUI_MOD_KEY_NAME "Ctrl"
#endif



extern GLFWwindow *gWindow;
extern NVGcontext *gVg;
extern std::shared_ptr<Font> gGuiFont;
extern float gPixelRatio;
extern bool gAllowCursorLock;


void guiInit();
void guiDestroy();
void guiRun();
void guiClose();
void guiCursorLock();
void guiCursorUnlock();
bool guiIsModPressed();
bool guiIsShiftPressed();

} // namespace rack
