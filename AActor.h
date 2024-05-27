#pragma once
class AActor : public Pixel
{
	int Gold;
	int Damage;
	int Helth;
	char Shape;

	void Move();
	void Attack();
};

