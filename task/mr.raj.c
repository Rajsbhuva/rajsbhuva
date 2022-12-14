#include<stdio.h>
void  main()
{
	int no1, no2;
	int ans;
	
	printf("enter  the value of no 1 and no2 ");
	scanf("%d%d",&no1,&no2 );
	ans = no1 & no2;
	
	printf("\nbitwise and of 4 & 5 is:%d",ans);
	ans =no1 & no2;
	
	printf("\nbitwise or of 4 | 5 is:%d",ans);
	ans =no1 | no2;
	
	printf("\nbitwise xor of 4 ^ 5 is:%d",ans);
	ans =no1 ^ no2;
	
	printf("\nbitwise complement of ~4   is:%d",ans);
	ans = ~ no1 ;
	
	printf("\nbitwise 1 seft left  of  4  is:%d",ans);
	ans =no1 << no2;
	
	printf("\nbitwise 2  seft regt of 4 & 5 is:%d",ans);
	ans = no1 >> no2;
	
}
	

