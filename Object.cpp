#include "Object.h"


void Object::Initialize(Vector2 pos, Vector2 velocity, int radius) {
	this->pos_ = pos;
	this->velocity_ = velocity;
	this->radius_ = radius;
}


void Object::Update() {

	// 毎フレーム速度を加算
	pos_.x += velocity_.x;
	pos_.y += velocity_.y;

	// 端についたら速度を反転
	if (pos_.x >= 1280 || pos_.x <= 0) {
		velocity_.x *= -1;
	}
	if (pos_.y >= 720 || pos_.y <= 0) {
		velocity_.y *= -1;
	}
}


void Object::Draw() {
	Novice::DrawEllipse(
		int(pos_.x), int(pos_.y),
		int(radius_), int(radius_),
		0.0f, 0xFFFFFFFF, kFillModeSolid);
}