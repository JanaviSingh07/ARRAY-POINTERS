#include <stdio.h>
int main() {
int arr [5] = {10,25,30,45,50};
int i,key,found = 0;
printf ("enter element to search:");
scanf("%d,key");
for (i = 0 ; i<5;i++){
    if (arr[i] ==key) {
        found = i;
        break;
    }
}
printf("element %d not found \n", key);
return 0;
}


