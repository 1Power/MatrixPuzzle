
 #include <stdio.h>
int main()
{ int a,b,N;
  printf("please iuput N=");
 scanf("%d", &N);
   for(a=1;a<=N;a++) //���ѭ��  aΪ������bΪ������NΪѭ������ 
   {for(b=1;b<=N;b++) //�ڲ�ѭ�� 
    if(b<=N+1-a)       //�Խ��ߵ��ϰ벿�� 
		 if (a<=b) printf("%-4d",a); //�Ƚ�a,b �����Сֵ 
		 else printf("%-4d",b);
	else 	  //�Խ��ߵ��°벿�� 
		  if(a>b)  //�Ƚ�a,b ��� N-��+1 
		  printf("%-4d",N-a+1);
		  else printf("%-4d",N-b+1);
		  printf("\n");
   }    
    return 0;
}
