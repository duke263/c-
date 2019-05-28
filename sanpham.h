#ifndef SANPHAM
#define SANPHAM
#include <iostream>
#include <string>
using namespace std;
class sanpham
{
private:
	int ID;
	string name;
	int price;
	int solg;
	static int sum;
public:
	sanpham(){
		sum++;
		this->ID=sum;
	}
	sanpham(string name,int price,int solg)
	{
		this->ID=sum;
		sum++;
		this->name=name;
		this->price=price;
		this->solg=solg;
	}
};
class market
{
private:
	double chietkhau;
	int tax;
public:
	market(){}
	market(double chietkhau,int tax){}
};
int sanpham::sum=0;
#endif
