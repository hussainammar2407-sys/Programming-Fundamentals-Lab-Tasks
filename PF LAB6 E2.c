#include<stdio.h>
int main() {
	
	int t1=0,t2=1,t3=0,i=1;
	printf("Fibonacci series upto 1000: ");
	
	while(i<=1000){
		printf("%d\n",t3);
		t1=t2;
		t2=t3;
		t3=t1+t2;
		i++;
	}
       return 0;
       
   }
