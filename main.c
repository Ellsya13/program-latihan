#include <stdio.h>
int main(){

    titik matriks[4][4];
    int i, j;
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("\nmasukkan koordinat x:\n");
            scanf("%d", &matriks[i][j], x);
            printf("\nmasukkan koordinat y:\n");
            scanf("%d", &matriks[i][j], y);
        }
    }
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            printf("koordinat x: %d\n", matriks[i][j], x);
            printf("koordinat y: %d\n", matriks[i][j], y);
        }
    }
return 0;
}




/*arr[0][1].red = 0;
arr[0][1].green = 255;
arr[0][1].blue = 0;
for(b=0; b<baris; b++){

    for(k=0; k<kolom; k++){

        if((arr[b][k].red == 255) && (arr[b][k].green == 255) && (arr[b][k].blue == 255)){
            printf("putih");
        }

        else if((arr[b][k].red == 0) && (arr[b][k].green == 255) && (arr[b][k].blue == 0)){

            printf("hijau");

        }
    }

    printf("\n");

}
return 0;
 
} 
n*/