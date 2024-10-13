#include <stdio.h>
#include <ctype.h>

#define MAX_SIZE 100

void sort_asc(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}


void sort_desc(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[MAX_SIZE];
    int n = 0;
    char input[1001];


    fgets(input, sizeof(input), stdin);

    int num = 0;
    int is_num = 0;
    int isdigit(int _c);


    for (int i = 0; input[i] != '\0'; i++) {
        if (isdigit(input[i])) {
            num = num * 10 + (input[i] - '0');
            is_num = 1;
        } else {
            if (is_num) {
                arr[n++] = num;
                num = 0;
                is_num = 0;
            }
            if (input[i] == '.') {
                break;
            }
        }
    }

    if (is_num) {
        arr[n++] = num;
    }

    int even[MAX_SIZE], odd[MAX_SIZE];
    int even_count = 0, odd_count = 0;

    // Phân loại số chẵn và lẻ
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[even_count++] = arr[i];
        } else {
            odd[odd_count++] = arr[i];
        }
    }

    sort_asc(even, even_count);
    sort_desc(odd, odd_count);

    int even_index = 0, odd_index = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            arr[i] = even[even_index++];
        } else {
            arr[i] = odd[odd_index++];
        }
    }


    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
