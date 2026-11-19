# include <stdio.h>
int main (){
	int n;
	int count=0;
	printf("enter your number check prime or not");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==2){
		printf("this is prime number");
   }else {
   	printf("not a prime number");
   }
   
   return 0;
	
}