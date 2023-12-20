#include <stdio.h>

void selectionSort(int array[], int x) {
    int a, b, min_dx, temp;
    for (a = 0; a < x - 1; a++) {
        min_dx = a;
        for (b= a + 1; b < x; b++) {
            if (array[b] < array[min_dx]) {
                min_dx = b;
            }
        }
        
        temp = array[a];
        array[a] = array[min_dx];
        array[min_dx] = temp;
    }
}

int main() {
    int kelereng[5];
    
    
    for (int a = 0; a < 5; a++) {
        printf("Kelereng Anak ke %d : ", a + 1);
        scanf("%d", &kelereng[a]);
    }
    
    
    selectionSort(kelereng, 5);
    
    
    printf("===OUTPUT===\n");
    printf("Hasil pengurutan : ");
    for (int a = 0; a < 5; a++) {
        printf("%d ", kelereng[a]);
    }
    
    return 0;
}