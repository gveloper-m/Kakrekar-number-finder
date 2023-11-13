

#include <stdio.h>

int main()
{
    
    int s1,s2=0;
    
    int N;
    scanf("%d",&N);
    
    long long int Np = N*N;
  
    
    if (N<0){
        printf("Wrong Input");
    }else{

    for (long long int i=1; i<=Np; i=i*10){
       s1=Np/i;
       for (long long int j=1; j<Np; j=j*10){
           s2=Np%j;
           if (s1+s2==N){
               printf("A + B= N");
           }
       }
       
    }
}
    return 0;
}
