//# include <iostream>
//using namespace std;
//int main () {
//	int n;
//	cin>>n;
//	int arr[n];
//	for (int i =0;i<n;i++){
//		cin>>arr[i];
//		for (int i =0;i<n;i++){
//			int j ,x;
//			j =i-1;
//			x = arr[i];
//			//x =
//			while (j>-1 && arr[j]>x){
//				arr[j+1]=arr[j];
//				j--;
//			} 
//			arr[j+1] = x;
//		}
//	}
//	for (int i =0;i<n;i++){
//		cout<<arr[i]<<" ";
//	}
//}

# include <iostream>
using namespace std;
int main () {
	int n;
	cin>>n;
	int arr[n];
	for (int i =0;i<n;i++){
		cin>>arr[i];
}
for (int i =0;i<n;i++){
	int j = i-1;
	int x = arr[i];
	while (j>-1 && arr[j]>x){
		arr[j+1]=arr[j];
		j--;
	}
	arr[j+1]=x;
}
	for (int i =0;i<n;i++){
		cout<<arr[i]<<" ";
}
}
