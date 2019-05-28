#include <iostream>
#include <string>
#include "sanpham.h"
#include "khachhang.h"
#include "nhanvien.h"
using namespace std;
int main()
{
	khachhang a("duke",2000,"bacninh","0976915023","123456789");
	khachhang b("due",1000,"bacninh","0976915023","123456759");
	nhanvien c("dua",2000,"bacninh","0976915023","1234567299");
	a.print();
	b.print();
	c.print();
	return 0;
}
