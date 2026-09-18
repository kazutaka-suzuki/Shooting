#pragma once
#include "Engine/GameObject.h"
#include <directxmath.h>

class Enemy : public GameObject
{
public:
	// コンストラクタ / デストラクタ
	Enemy(GameObject* parent);
	~Enemy();

	void Initialize() override;
	void Update() override;
	void Draw() override;
	void Release() override;

private:
	int hModel_;

	// 死亡フラグ（初期値は false）
	bool isDead_ = false;

public:
	// ーー 当たり判定用の関数 ーー
	DirectX::XMFLOAT3 GetPosition() const { return transform_.position_; }
	void Kill() { isDead_ = true; }
	bool IsDead() const { return isDead_; }
};