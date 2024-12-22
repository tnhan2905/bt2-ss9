#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50}, pos, newValue;

    for (int i = 0; i < 5; i++) printf("%d ", arr[i]);
    printf("\nNhap vi tri: "); scanf("%d", &pos);
    
    if (pos >= 0 && pos < 5) {
        printf("Nhap gia tri moi: "); scanf("%d", &newValue);
        arr[pos] = newValue;
    } else {
        return 1; 
    }
    for (int i = 0; i < 5; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
