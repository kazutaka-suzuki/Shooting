#pragma once
#include "Engine/GameObject.h"
#include <directxmath.h>

class Bullet : public GameObject
{
public:
	// コンストラクタ / デストラクタ
	Bullet(GameObject* parent);
	~Bullet();

	void Initialize() override;
	void Update() override;
	void Draw() override;
	void Release() override;

private:
	int hModel_;
	Transform tr_;
	float speed_;

	// 死亡フラグ（初期値は false）
	bool isDead_ = false;

public:
	// ーー 当たり判定用の関数（変数の定義より下に配置） ーー
	DirectX::XMFLOAT3 GetPosition() const { return tr_.position_; }
	void Kill() { isDead_ = true; }
	bool IsDead() const { return isDead_; }
};