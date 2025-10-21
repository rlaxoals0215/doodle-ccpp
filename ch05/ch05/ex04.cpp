#include <stdio.h>

int main() {
    int n;
    int arr[1000];

    printf("입력할 숫자의 개수 : ");
    scanf("%d", &n);
    printf("숫자 %d개를 입력하세요 : ", n);
    //for (int i = 0; i < n; i++) {
        //scanf("%d", &arr[i]);
    //}
    int i = 0;
    while(i< n) {
    i++;
    scanf(%d,&arr[i]);
    }

    //for (int i = n - 1; i >= 0; i--) {
        //printf("%d ", arr[i]);
    //}
    int i = n -1;
    while(i >= 0) {
    i--;
   printf(%d,arr[i]);
   }
}
