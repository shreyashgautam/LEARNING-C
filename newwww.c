#include<stdio.h>
long int main(){
	int num;
	scanf("%ld",&num);
	int rem=0;
	int a=0;
	int b=0;
	int c[100];
	int i=0;
	while(num>0){
		rem=num%10;
		num=num/10;
		c[i]=rem;
		i++;
	}
	for(int j=0;j<=i;j++){
		if(c[j]==7){
			a++;
		}
		else if(c[j]==9){
			b++;
		}
	}
	printf("number of 7 is %d\n",a);
	printf("number of 9 is %d\n",b);
}