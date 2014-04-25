#include <stdio.h>

int main(){

int mat[5][5];
int x, y;

for(x = 1; x <= 5; x++){
    for (y = 1; y <= 5; y++){

    if (x == y){
        mat[x][y] = 1;

    } else {
        mat[x][y] = 0;

    }

    printf("%d \t", mat[x][y]);
    }
    printf("\n");
}

return 0;

}
