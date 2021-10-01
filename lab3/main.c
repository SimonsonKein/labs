#include <stdio.h>
#define N 1000

//Variant 16

int main() {

    int a[N][N], columns, rows;

    printf("Enter columns "); scanf("%d", &columns);
    printf("Enter rows "); scanf("%d", &rows);

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++i) {
            scanf("%d", &a[i][j]);
        }
    }

    int countEqualNumberInARow = 1;
    int maxCountEqualNumberInARow = 1;
    int rowWithMaxNumbers = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns - 1; ++j) {
            if (a[i][j] == a[i][j+1]) {
                countEqualNumberInARow++;
            }
        }
        if (maxCountEqualNumberInARow < countEqualNumberInARow) {
            rowWithMaxNumbers = i;
        }
    }



    return 0;
}
