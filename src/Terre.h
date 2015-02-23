#pragma once
#include "guiVoyageurEspace.h"

class Terre
{
public:
	void setup(guiVoyageurEspace gui);
	ofVec3f draw(guiVoyageurEspace gui);
private:
	ofSpherePrimitive model;
	ofImage texture;
	ofMaterial materiel;
	float angleOrbite;
};

