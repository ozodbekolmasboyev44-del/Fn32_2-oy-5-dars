
#include <stdio.h>

int main() {
    
    int arr[3][4];

        for (int i = 0; i < 3; i++) {
           for (int j = 0; j < 4; j++) {
              printf("%d qator %d ustun", i + 1, j + 1);
               scanf("%d", &arr[i][j]);
           
        }
    }
    printf("\nTeskari tartib: \n");
    
         for (int i = 0; i < 3; i++) {
        for (int j = 3; j >= 0; j--) {
            printf("%d ", arr[i][j]);

             }
             printf("\n");
            }
           
    return 0;
}