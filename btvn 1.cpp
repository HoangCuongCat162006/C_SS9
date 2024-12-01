#include<stdio.h>
#define max 100

int main(){
	
	int n;
	int arr[max];
	int value,position;
	
	printf("Nhap so phan tu : ");
	scanf("%d",&n);
	 
	if (n<=0 || n > max){
		printf("So phan tu khong hop le ");
		return 1;
	}
	
	printf("Nhap %d phan tu : ");
	for (int i=0;1<n;i++){
		printf("Phan tu thu %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("Nhap gia tri muon chen : ");
	scanf("%d",value);
	printf("Nhap vi tri muon chen : ");
	scanf("%d",&position);
	
	if ( position < 0 || position > n +1 ){
		printf("Vi tri phong hop le : \n");
		return 1;
	}
		
	for (int i=n;i>=position;i++){
	arr[i]=arr[i-1];
	}
	arr[position-1]=value;
	
	printf("Mang sau khi chen : ");
	for (int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
	
	return 0;
}
