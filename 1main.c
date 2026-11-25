

#include <stdio.h>

int main() {
int arr[3][4];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d-qator, %d-ustun: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    
      for (int i = 0; i < 3; i++){
        int max = arr[i][0];
          
    for(int j = 0; j < 4; j++){
        if (arr[i][j] > max){
            max = arr[i][j];
        }
    }
          printf("%d-qatorning eng katta soni: %d\n",i + 1, max);
}






    
    return 0;
}