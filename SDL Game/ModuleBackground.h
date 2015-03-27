#pragma once
#include "Module.h"
#include "Animation.h"
#include "Globals.h"

class ModuleBackground : public Module
{
public:
	ModuleBackground(Application* app);
	~ModuleBackground();

	bool Start();
	update_status Update();

public:
	
	SDL_Texture* graphics;
	SDL_Rect ground;
	SDL_Rect background;
	Animation flag;
	SDL_Rect ship;
	Animation girl;
	Animation twomen;
	Animation greenman;
	Animation blueman;
	Animation brownman;

};