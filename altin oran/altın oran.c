#include<stdio.h>

   int main(){
   	 float BC,AC;
   	 int AB;
	 printf("dogru parcasının uzunlugunu giriniz:\n");
   	 scanf("%d",&AB);
	   
   	 BC=2*AB/(1+5^(1/2)); 
   	 AC=AB-BC;
   	 
   	 if((BC/AC)==(AB/BC)){
   	 printf("%f %f",&AC,&BC);
   }
   else
         printf("altin orana uygun bolunmemekte ");
   	 return 0;
   }
