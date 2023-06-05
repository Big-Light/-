#pragma once
#include<iostream>
using namespace std;
constexpr auto MAX = 1000;		//最大容量;

struct Peole			//联系人结构体
{
	string name;
	int sex = 0;
	int age = 0;
	string number;		//电话号码
	string address;		//家庭住址
};