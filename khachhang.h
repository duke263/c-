#ifndef KHACHHANG
#define KHACHHANG
#include "test.h"
class khachhang : public person
{
private:
	int ID;
	static int count1;
public:
	khachhang(){
		count1++;
		this->ID=count1;
	}
	khachhang(string name ,int year,string que,string numb,string cccd)
	{
		this->ID=count1;
		count1++;
		this->name=name;
		this->year=year;
		this->numb=numb;
		this->que=que;
		this->cccd=cccd;
	}
	int getID()const
	{
		return this->ID;
	}
	void print()const{
		cout<<ID<<" "<<name<<endl;
	}
};
int khachhang::count1=0; 
#endif
