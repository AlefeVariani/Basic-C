#include <stdio.h>
#include <stdlib.h>

int main(){
	int i, j, mat_1[2][2],mat_2[2][2], mat_res[2][2];
	
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			
			printf("\n\5Informe valores da matriz 1\n");
			scanf("%d",&mat_1[i][j]);
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			
			printf("\n\4Informe valores da matriz 2\n");
			scanf("%d",&mat_2[i][j]);
			
			mat_res[i][j] = mat_1[i][j] + mat_2[i][j];
			
		}
	} 
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			
			printf("\n\nA Matirz resultante eh: %d\n", mat_res[i][j]);
		}                        
	} 
	return 0;
}
