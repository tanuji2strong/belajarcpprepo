#include <iostream>
void tukar(int &a,int &b){ 
	int temp;
	temp = a;
	a =b;
	b = temp;
}
int main(){
	int y;	
	int z;
	std::cin>> y >> z;
	tukar(y,z);
	std::cout<<y<<z;
	
	return 0;
}
