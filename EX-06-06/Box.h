#pragma once
class Box {
	float width;
	float height;
	float depth;
	float surface;
	float volume;

public:
	float GetSurface();
	float GetVolume();
	Box(float width, float height, float depth);
};