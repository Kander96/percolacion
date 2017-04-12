#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define M	30
#define N	30


void red(int M,int N, float proba);



int main(){

	for(i=0;i<z;i++){
		
		prob=0.5;
		denom=2.0;
		srand(time(NULl));

		for(j=0;j<8;j++){

			red(N,M,prob);
			
	
	
}
void red(int M, int N, float prob){
	
	float p,prob,denom;
	int num,a,b,c,N,M;
	int *red;

	b=prob*10000;
	red=(int*)malloc(N*M*sizeof(int));
	a=0;
	for (int i=0;i<N;i++){  
    
        	for (int j=0;j<M;j++){  
        
		  	c= rand()%10000;
			if(c<=b){
			num=1;
			}
			else{
			num=0;
			}
			*(red+i*M+j)=num;	
        	printf("\t%d",*(red+i*M+j));
		}
	}
int hoshen(int *red,int N,int M){

	int *clase;
	int h,i,j,s1,s2,frag;
	
	clase=(int*)malloc(N*M/2*sizeof(int));
	s1=0;
	frag=2;
	j=0;
	h=0; //puede ser que este h se resetee cada vez que llamo a la función actualizar porque está definida como una función auxiliar.
	i=0;

	for(k=0;k<N*M;k++){
		*(clase+k)=0;
	}
	
	if (*red==1){
		actualizar(s1,red,clase,frag);
	for(i=1;i<N;i++){
		if(*(red+i)==1){
			s1=*(red+i-1);	
			actualizar(s1,red+i,clase,frag);
		
		
	
	}


}
int actualizar(int s1,int red,int *clase,int frag,int i,int j,int h){
	if (s1==0){
		*(red+i*M+j)=frag;
		*(clase+h)=frag;
		frag=frag+1;
		h=h+1;
		
	}
	else{
		*(red+i*M+j)=s1;
	}
}
