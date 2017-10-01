#include <stdio.h>

int val[6];
int i, j, flagNull;
int nIter;

void scan(){
	for(i = 0; i < 5; i++)
		scanf("%d", &val[i]);
 	
	scanf("%d", &nIter);
	return;
}

void iteracao(){
	for(i = 1; i <= nIter; i++){
      flagNull = 1;
      for(j = 0; j < 5; j++){
        if((i%val[j]) == 0){    
				printf("%d", j);       
				flagNull = 0;      
			  }
  	  }
    
    if(flagNull)
    printf("-");
    printf("\n");
	}
  
 	return;
}

int main(){
  scan();
  iteracao();
        
	return 0;
}
