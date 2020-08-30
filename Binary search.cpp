#include <stdio.h>

int binarySearch ( int *arr, int left, int right,int target){
	while (left <=right)
	{
		int mid = (left + right)/2;
		if (arr[mid] < target)
			{
				left = mid + 1;
			}
		else if (arr[mid] > target)
			{right = mid -1;} 
		else{return mid;}
	}
	return -1;
}

int main (){
	int n= 10,target;
	int arr[10] = {2, 3, 5, 7, 9, 10, 11, 12, 14};
	scanf("%d",&target);
	printf("%d\n", binarySearch(arr,0,n-1,target));
	return 0;
}
