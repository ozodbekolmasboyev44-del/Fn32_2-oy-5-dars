
#include <stdio.h>

int main() {
    
    int arr[4][4];
int max,min;
        for (int i = 0; i < 4; i++) {
           for (int j = 0; j < 4; j++) {
              printf("%d qator %d ustun", i + 1, j + 1);
               scanf("%d", &arr[i][j]);
           
        }
    }
            max = arr[0][0];
            min = arr[0][0];  
    
        for (int i = 0; i < 4; i++) {
           for (int j = 0; j < 4; j++) {
               
            if (arr[i][j] > max){
                max = arr[i][j];
            }
               
               if(arr[i][j] < min) {
                min = arr[i][j];
            }
          }
        }
      
 printf("Eng katta son: %d\n", max);
    printf("Eng kichik son: %d\n", min);
    printf("Ayirmasi: %d\n", max - min);       
    return 0;
}