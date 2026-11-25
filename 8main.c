
#include <stdio.h>

int main() {
    
    int arr[3][3];
    int sum,maxSum = 0; 
    int maxQator = 0; 
    
        for (int i = 0; i < 3; i++) {
           for (int j = 0; j < 3; j++) {
              printf("%d qator %d ustun", i + 1, j + 1);
               scanf("%d", &arr[i][j]);
           
        }
    }
            
    
        for (int i = 0; i < 3; i++) {
            sum = 0;
           for (int j = 0; j < 3; j++) {
               sum += arr[i][j];
           }
            printf("%d-qator yig'indisi: %d\n", i + 1, sum);

        if (i == 0 || sum > maxSum) {
            maxSum = sum;
            maxQator = i + 1;
        }
    }
        printf("Eng katta yigindi: %d\n",maxSum);
        printf("Eng katta yigindili qator: %d\n",maxQator);
    
    return 0;
}