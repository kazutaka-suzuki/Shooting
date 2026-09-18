#pragma once
#include "Engine/GameObject.h"

class PlayScene : public GameObject
{
public:
	// コンストラクタ
	PlayScene(GameObject* parent);

	// ライフサイクル関数
	void Initialize() override;
	void Update() override;
	void Draw() override;
	void Release() override;

private:
	int hModel_;   // モデルのハンドル
	Transform ot_; // おでん用のトランスフォーム
}; // ← ★この「 }; 」が抜けているか、崩れている可能性が高いです！