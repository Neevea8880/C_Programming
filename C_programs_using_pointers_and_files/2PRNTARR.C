#include <stdio.h>
int main() {
	int data[10],i;

    printf("Enter elements: ");
	for (i = 0;i < 10;++i)
        scanf("%d", data + i);
	for (i = 0;i < 10;++i)
        printf("%d\n", *(data + i));
    return 0;
}