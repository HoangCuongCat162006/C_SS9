#include<stdio.h>

int main(){
	
	int arr[]={10 ,  20 ,  30 ,  40};
	int n = sizeof(arr)/sizeof(arr[0]);
	int potision,newvalue;
	
	printf("Nhap vao mang : ");
	for (int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
    printf("\n");

	printf("Nhap vao vi tri can sua : ");
	scanf("%d",&potision);
	
	if(potision<1||potision>n){
		printf("Vi tri khong hop le ");
		return 1;
	}
	
	
	printf("Nhap mot gia tri moi : ");
	scanf("%d",&newvalue);
	
	arr[potision-1]=newvalue;
	
	printf("Mang sau khi sua la : ");
	for(int i=0; i<n; i++){
		printf("%d",&arr[i]);
	}
	printf("\n");
	
	return 0;
}
