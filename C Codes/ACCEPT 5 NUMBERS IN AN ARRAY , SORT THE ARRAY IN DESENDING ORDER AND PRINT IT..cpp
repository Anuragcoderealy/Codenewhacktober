#include<stdio.h>
int main(){
	int arr[100];
	int i,j,temp,n;
	printf("Enter Value Of Array\n");
	scanf("%d",&n);
	printf("Enter the Numbers of the Array\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[i]<arr[j]){
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;	
			}
		}
	}
	printf("The Sorted Numbers In Desending Order Are:\n");
	for(i=0;i<n;i++){
		printf("%d\n",arr[i]);
	}
	return 0;
}
