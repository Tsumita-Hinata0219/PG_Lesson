#pragma once
#include "Vector2.h"
#include "Novice.h"

class Object {

public:

	void Initialize(Vector2 pos, Vector2 velocity, int radius);

	void Update();

	void Draw();

public:

	Vector2 pos_;

	Vector2 velocity_;

	int radius_;

};