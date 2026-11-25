
#include <stdio.h>

int main() {
    
    int arr[4][4];
    int son;
    int count = 0;
    
     printf("Qidiriladigan sonni kiriting: ");
               scanf("%d",&son);
    
        for (int i = 0; i < 4; i++) {
           for (int j = 0; j < 4; j++) {
              printf("%d qator %d ustun", i + 1, j + 1);
               scanf("%d", &arr[i][j]);
           
        }
    }
            
    
        for (int i = 0; i < 4; i++) {
           for (int j = 0; j < 4; j++) {
           if(arr[i][j] == son){
               count++;
           }
           }
           }
            printf("%d soni massivda %d marta uchraydi.\n", son, count);

      
       
    return 0;
}