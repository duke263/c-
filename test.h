#ifndef PERSON
#define PERSON
#include <iostream>
#include <string>
using namespace std;
class person
{
protected:
	string name;
	int year;
	string que;
	string numb;
	string cccd;
	int id;
public:
	person(){}
	person(string name ,int year,string que,string numb,string cccd,int id)
	: name(name),year(year),que(que),numb(numb),cccd(cccd),id(id)
	{}
};
#endif