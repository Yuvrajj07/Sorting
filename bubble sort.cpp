# include <iostream>
using namespace std;
int main () {
	int a,flag =0;
	cin>>a;
	int arr[a];
	for (int i =0;i<a;i++){
		cin>>arr[i];
		}
	for (int i =0;i<a;i++){
	
		for (int j =0;j<a-1-i;j++){
			if (arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
				flag++;// it will tell the number of swaps done during the entire process;
			} 		   // if flag = 0 (zero) it means the array is sorted or no swapping is done
		}
	}
	for (int i =0;i<a;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<flag;
}
