#include<stdio.h>
using namespace std;

int main(){
	// m�nh d� bat giu
	int m=0;
	int n=0;
	auto t= [&, n](int a){
		m=n+a; // n�u kh�ng c� mutable th� th� bi�n n b�n trong kh�ng dduoc phep thay d�i
	};
	auto f= [&, n](int a) mutable{
		m= ++n +a; // n�u c� mutable th� bi�n n b�n trong duoc thay d�i nhung gia tri ben ngoai van giu nguyen
	};
	f(4);
	printf("%d", m);
	return 0;
}
