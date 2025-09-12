#include <iostream>


int main(){
	int arr[]={1,2,3,4,5};
	int sum=0;
	for (int i = 0;i<sizeof(arr)/sizeof(arr[0]);i++){
		sum+=arr[i];
	}
	std::cout<<sizeof(arr)<<'\n';
	std::cout<<sizeof(arr[0]);
	std::cout<<"sum = "<<sum<<std::endl;
	return 0;
}
