#include <stdio.h>

int main() {
    int x, y, z, average;

 
    //printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    // Menghitung nilai rata-rataa
    average = (x + y + z) / 3;

    // Menampilkan hasil
    printf("Average is %d\n", average);

    return 0;
}
