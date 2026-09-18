#include "PlayScene.h"
#include "Engine//Model.h"
#include "Player.h"
#include "Bullet.h"
#include "Enemy.h"

PlayScene::PlayScene(GameObject* parent)
	:GameObject(parent, "PlayScene"), hModel_(-1)
{
}

void PlayScene::Initialize()
{
	Instantiate<Enemy>(this);
	Instantiate<Player>(this);
	//Instantiate<Bullet>(this);
}

void PlayScene::Update()
{
}

void PlayScene::Draw()
{

}

void PlayScene::Release()
{
}