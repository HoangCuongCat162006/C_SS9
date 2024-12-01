#include <stdio.h>

#define MAX 100

int main() {
    int arr[MAX];
    int n;	
    int position;

    printf("Nhap so luong phan tu (toi da 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX) {
        printf("So luong phan tu khong hop le.\n");
        return 1;
    }

    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Nhap vi tri muon xoa (1 den %d): ", n);
    scanf("%d", &position);

    if (position < 1 || position > n) {
        printf("Vi tri khong hop le.\n");
        return 1;
    }

    for (int i = position - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    printf("Mang sau khi xoa: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

