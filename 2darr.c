#include <stdio.h>

int main() {
int arr [3][2]={
 {12,23},{13,15},{32,86}
};
int i;
printf("entre i value btw 0 AND 2 : ");
scanf("%d",&i);
int j;
printf("entre j value btw 0 and 1 : ");
scanf("%d", &j);

printf("%d", arr[i][j]);
    return 0;
}