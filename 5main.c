
#include <stdio.h>

int main() {
    
    int arr[4][4];

        for (int i = 0; i < 4; i++) {
           for (int j = 0; j < 4; j++) {
              printf("%d qator %d ustun", i + 1, j + 1);
               scanf("%d", &arr[i][j]);

               
               if (arr[i][j] == 0){
                   arr[i][j] = 1;
           }
        }
    }
    printf("\nYangi massiv: \n");
    
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
             printf("%d ",arr[i][j]);

             }
             printf("\n");
            }
           
    return 0;
}