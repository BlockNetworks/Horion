#pragma once
#include "Module.h"
class Glide :
	public IModule
{
private:
	float glideMod = -0.01f;
	float glideModEffective = 0;
public:
	Glide();
	~Glide();

	// Inherited via IModule
	virtual std::string getModuleName() override;
	virtual void onTick(C_GameMode* gm) override;
};

