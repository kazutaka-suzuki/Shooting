#include "Bullet.h"
#include "Engine/Model.h"
#include "Player.h"
#include <cassert>

Bullet::Bullet(GameObject* parent)
	: GameObject(parent, "Bullet"), hModel_(-1), speed_(0.5f)
{
}

Bullet::~Bullet()
{
}

void Bullet::Initialize()
{
	hModel_ = Model::Load("ball.fbx");
	assert(hModel_ >= 0);

	Player* player = (Player*)FindObject("Player");

	XMFLOAT3 pos = player->GetWorldPosition();
	transform_.position_ = pos;
}

void Bullet::Update()
{
	transform_.position_.z = transform_.position_.z + speed_;
}

void Bullet::Draw()
{
	Model::SetTransform(hModel_, transform_);
	Model::Draw(hModel_);
}

void Bullet::Release()
{
	
}