#include "CircleCollider.h"

CircleCollider::CircleCollider(float radius, bool broadPhase /* = false */)
	: Collider(ColliderType::Circle) 
{
	mRadius = radius;

	if(DEBUG_COLLIDERS) {

		if(broadPhase)
			SetDebugTexture(new Texture("BroadPhaseCollider.png"));
		else
			SetDebugTexture(new Texture("CircleCollider.png"));

		mDebugTexture->Scale(VEC2_ONE * (radius * 2 / 100.0f));
	}
}

CircleCollider::~CircleCollider() {

}

Vector2 CircleCollider::GetFurthestPoint() {

	return VEC2_RIGHT * (mRadius + Pos(GameEntity::local).Magnitude());
}

float CircleCollider::GetRadius() {

	return mRadius;
}