#ifndef NHANVIEN
#define NHANVIEN
#include "test.h"
class nhanvien : public person
{
private:
	int ID;
	static int count2;
public:
	nhanvien(){
		count2++;
		this->ID=count2;
	}
	nhanvien(string name ,int year,string que,string numb,string cccd)
	{
		this->ID=count2;
		count2++;
		this->name=name;
		this->year=year;
		this->numb=numb;
		this->que=que;
		this->cccd=cccd;
	}
	void print()const{
		cout<<ID<<" "<<name<<endl;
	}
};
int nhanvien::count2=0;
#endif