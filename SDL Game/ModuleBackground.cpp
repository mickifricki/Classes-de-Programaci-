#include "Globals.h"
#include "Application.h"
#include "ModuleBackground.h"

// Reference at https://www.youtube.com/watch?v=OEhmUuehGOA

ModuleBackground::ModuleBackground(Application* app) : Module(app)
{
	graphics = NULL;

	// ground
	ground.x = 8;
	ground.y = 391;
	ground.w = 896;
	ground.h = 72;

	// Background / sky
	background.x = 72;
	background.y = 208;
	background.w = 768;
	background.h = 176;

	// flag animation
	flag.frames.PushBack({848, 208, 40, 40});
	flag.frames.PushBack({848, 256, 40, 40});
	flag.frames.PushBack({848, 304, 40, 40});
	flag.speed = 0.08f;

	//Ship

	ship.x = 8;
	ship.y = 24;
	ship.w = 521;
	ship.h = 184;

	//girl animation
	girl.frames.PushBack({ 624, 16, 32, 57 });
	girl.frames.PushBack({ 624, 80, 32, 57 });
	girl.frames.PushBack({ 624, 144, 32, 57 });
	girl.speed = 0.08f;

	//2 men animation
	twomen.frames.PushBack({ 552, 14, 65, 57 });
	twomen.frames.PushBack({ 552, 78, 65, 57 });
	twomen.frames.PushBack({ 552, 142, 65, 57 });
	twomen.speed = 0.08f;

	//blue man animation
	greenman.frames.PushBack({ 664, 16, 32, 57 });
	greenman.frames.PushBack({ 664, 80, 32, 57 });
	greenman.speed = 0.08f;

	//blueman
	blueman.frames.PushBack({ 704, 16, 48, 57 });
	blueman.frames.PushBack({ 704, 80, 48, 57 });
	blueman.frames.PushBack({ 704, 144, 48, 57 });
	blueman.speed = 0.08f;

	//brownman
	brownman.frames.PushBack({ 760, 16, 40, 40 });
	brownman.frames.PushBack({ 760, 64, 40, 40 });
	brownman.frames.PushBack({ 760, 112, 40, 40 });
	brownman.speed = 0.08f;
}

ModuleBackground::~ModuleBackground()
{}

// Load assets
bool ModuleBackground::Start()
{
	LOG("Loading background assets");
	bool ret = true;
	graphics = App->textures->Load("ken_stage.png");
	return ret;
}

// Update: draw background
update_status ModuleBackground::Update()
{
	// Draw everything --------------------------------------
	App->renderer->Blit(graphics, 0, 0, &background, 0.75f); // sea and sky
	App->renderer->Blit(graphics, 560, 8, &(flag.GetCurrentFrame()), 0.75f); // flag animation
	App->renderer->Blit(graphics, 0, 0, &ship, 0.9f); // ship
	App->renderer->Blit(graphics, 192, 104, &(girl.GetCurrentFrame()), 0.9f); //girl animation
	App->renderer->Blit(graphics, 128, 102, &(twomen.GetCurrentFrame()), 0.9f); //two men animation
	App->renderer->Blit(graphics, 224, 104, &(greenman.GetCurrentFrame()), 0.9f); //green man animation
	App->renderer->Blit(graphics, 288, 96, &(blueman.GetCurrentFrame()), 0.9f); //blue man animation
	App->renderer->Blit(graphics, 88, 24, &(brownman.GetCurrentFrame()), 0.9f); //brown man animation

	// TODO 2: Draw the ship from the sprite sheet with some parallax effect


	// TODO 3: Animate the girl on the ship (see the sprite sheet)

	
	App->renderer->Blit(graphics, 0, 170, &ground);

	return UPDATE_CONTINUE;
}