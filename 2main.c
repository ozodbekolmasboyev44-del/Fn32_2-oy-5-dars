

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
        int min = arr[i][0];
          
    for(int j = 0; j < 4; j++){
        if (arr[i][j] < min){
            min = arr[i][j];
        }
    }
          printf("%d-qatorning eng kichig soni: %d\n",i + 1, min);
}






    
    return 0;
}