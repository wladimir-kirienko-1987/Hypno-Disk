#include "MainScene.h"
#include <iostream>

USING_NS_CC;

Scene* MainScene::createScene()
{
	// 'scene' is an autorelease object
	auto scene = Scene::create();
	auto layer = MainScene::create();
	scene->addChild(layer);
	return scene;
}

bool MainScene::init()
{

	if (!Layer::init())
	{
		return false;
	}

	sprite = Sprite::create("unnamed.png");
	sprite->setPosition(640 / 2, 480 / 2);
	this->addChild(sprite, 0);
	auto rotate = cocos2d::RotateBy::create(0.05, -45);
	auto repeat1 = cocos2d::RepeatForever::create(rotate);
	sprite->runAction(repeat1);

	return true;
}
