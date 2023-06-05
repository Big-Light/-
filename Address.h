#pragma once
#include<iostream>
using namespace std;
#include"Peole.h"



struct Address
{
	Peole personArr[MAX];
	int Size = 0;		//当前通讯录有的人数
};