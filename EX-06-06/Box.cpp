#include<iostream>
using namespace std;
#include"Box.h"

Box::Box(float width, float height, float depth) {
	this->width = width;
	this->height = height;
	this->depth = depth;
}

float Box::GetSurface() {
	this->surface = 2 * (this->width * this->height) + 2 * (this->width * this->depth) + 2 * (this->height * this->depth);
	return this->surface;
}

float Box::GetVolume() {
	this->volume = this->width * this->height * this->depth;
	return this->volume;
}