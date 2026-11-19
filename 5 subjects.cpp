# include <stdio.h>
int main (){
	int m1,m2,m3,m4,m5,total;float percentage;
	printf("enter marks five subjects");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	total=m1+m2+m3+m4+m5;
	percentage=total/5.0;
	printf("total=%d\n",total);
	printf("percentage=%.2f %%\n",percentage);
	if(m1<35||m2<35||m3<35||m4<35||m5<35){
		printf("reslut : fail\n");
	}
   elseif(percentage>=75){
		printf("reslut : distinction class\n");
	}
	elseif(percentage>=60){
		printf(" reslut : frist class\n");
	}
	elseif(percentage>=50){
		printf("reslut :second class\n");
	}
	else{
		printf("reslut:pass class\n");
	}
	return 0;
	
}