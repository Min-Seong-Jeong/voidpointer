#include<stdio.h>
int main(){
	void* ptrData = NULL;
	int a = 10;
	int temp = 0;
	ptrData = &a;
	temp = *(int *)ptrData;
	printf("temp: %d\n",temp);
	printf(" %d\n",*(int *)ptrData);
	return 0;
}
