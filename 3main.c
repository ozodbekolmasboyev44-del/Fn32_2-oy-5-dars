

#include <stdio.h>

int main() {
int arr[4][4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d-qator, %d-ustun: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    int count = 0;
    
     printf("\n5 ga bo'linadigan sonlar: ");
    
       for (int i = 0; i < 4; i++){    
          for(int j = 0; j < 4; j++){
        if (arr[i][j] %5 == 0){
            printf("%d \n",arr[i][j]);
            count++;
     }
     }
       
     }
      printf("\nButun sonlar soni: %d\n",count);




    
    return 0;
}