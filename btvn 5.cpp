#include <stdio.h>
#include <stdbool.h>

#define MAX 100

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void inputArray(int arr[], int *n) {
    printf("Nhap so luong phan tu (toi da %d): ", MAX);
    scanf("%d", n);

    if (*n <= 0 || *n > MAX) {
        printf("So luong phan tu khong hop le!\n");
        *n = 0;
        return;
    }

    for (int i = 0; i < *n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void displayArray(int arr[], int n) {
    if (n == 0) {
        printf("Mang dang rong!\n");
        return;
    }
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void displayEvenAndSum(int arr[], int n) {
    int sum = 0;
    printf("Cac phan tu chan: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
            sum += arr[i];
        }
    }
    printf("\nTong cac phan tu chan: %d\n", sum);
}

void findMinMax(int arr[], int n) {
    if (n == 0) {
        printf("Mang rong, khong co gia tri lon nhat/nho nhat.\n");
        return;
    }
    int max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("Gia tri lon nhat: %d\n", max);
    printf("Gia tri nho nhat: %d\n", min);
}

void displayPrimesAndSum(int arr[], int n) {
    int sum = 0;
    printf("Cac phan tu la so nguyen to: ");
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            printf("%d ", arr[i]);
            sum += arr[i];
        }
    }
    printf("\nTong cac so nguyen to: %d\n", sum);
}

void countOccurrences(int arr[], int n) {
    int x, count = 0;
    printf("Nhap so muon thong ke: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) count++;
    }
    printf("So %d xuat hien %d lan trong mang.\n", x, count);
}

void addElement(int arr[], int *n) {
    if (*n >= MAX) {
        printf("Mang da day, khong the them phan tu!\n");
        return;
    }

    int value, position;
    printf("Nhap gia tri muon them: ");
    scanf("%d", &value);
    printf("Nhap vi tri muon them (1 den %d): ", *n + 1);
    scanf("%d", &position);

    if (position < 1 || position > *n + 1) {
        printf("Vi tri khong hop le!\n");
        return;
    }

    for (int i = *n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position - 1] = value;
    (*n)++;
    printf("Da them phan tu thanh cong.\n");
}

int main() {
    int arr[MAX];
    int n = 0;
    int choice;

    do {
        printf("\n=== MENU ===\n");
        printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
        printf("2. In ra gia tri cac phan tu dang quan ly\n");
        printf("3. In ra gia tri cac phan tu chan va tinh tong\n");
        printf("4. In ra gia tri lon nhat va nho nhat trong mang\n");
        printf("5. In ra cac phan tu la so nguyen to va tinh tong\n");
        printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do\n");
        printf("7. Them mot phan tu vao vi tri chi dinh\n");
        printf("8. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                inputArray(arr, &n);
                break;
            case 2:
                displayArray(arr, n);
                break;
            case 3:
                displayEvenAndSum(arr, n);
                break;
            case 4:
                findMinMax(arr, n);
                break;
            case 5:
                displayPrimesAndSum(arr, n);
                break;
            case 6:
                countOccurrences(arr, n);
                break;
            case 7:
                addElement(arr, &n);
                break;
            case 8:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long chon lai.\n");
        }
    } while (choice != 8);

    return 0;
}

