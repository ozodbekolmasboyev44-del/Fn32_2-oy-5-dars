

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
           int count = 0;
           
          for(int j = 0; j < 4; j++){
              if(arr[i][j] > 0){
                  count++;
              }
     }
           printf("%d-qatorda %d ta busbat son bor.\n",i + 1, count);
     }
       

    return 0;
}