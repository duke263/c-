#include <iostream>
using namespace std;
const int SIZE=10;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class safearay
{
private:
	int arr[SIZE];
public:
		safearay()
		{
			/*register nham goi y rang bien nay co tan suat su dung rat cao, 
			hay su dung register(thanh ghi) de thao tac bien nay. Muc dich la toc do vi thao tac tren register(thanh ghi) nhanh hon*/
			register int i;
			for(int i;i<SIZE;i++)
			{
				arr[i]=i;
			}
		}
		//qua tai mang
		int &operator[](int i)
		{
			if(i>SIZE){
				cout<<"Index out of bounds"<<endl;
				return arr[0];
			}
			return arr[i];
		}
		
};
int main(int argc, char** argv) {
	safearay A;
	cout<<"Value of A[2] : " <<A[2]<<endl;
	cout<<"Value of A[12] : " <<A[12]<<endl;
	return 0;
}
