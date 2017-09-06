#ifndef _CIRCLECOLLIDER_H
#define _CIRCLECOLLIDER_H

#include "Collider.h"

class CircleCollider : public Collider {

private:

	float mRadius;

public:

	CircleCollider(float radius, bool broadPhase = false);
	~CircleCollider();

	Vector2 GetFurthestPoint() override;

	float GetRadius();
};

#endif
