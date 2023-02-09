#include <stdio.h>
#include <locale.h>

int fibo(int n);

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num, r;
	
	printf("Digite o termo: ");
	scanf("%d", &num);
	
	printf("\nA sequência é: \n");
    for(r = 0; r < num; r++){
       printf("%d ", fibo(r+1));   
   }
}

int fibo(int num){
	
   if(num==1 || num==2){
   	    return 1;
   }else{
       return fibo(num-1) + fibo(num-2);
   }
}
