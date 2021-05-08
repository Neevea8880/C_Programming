#include<stdio.h>
struct Bill{
    char firstName[10];
    char lastName[10];
    char Address[20];
    float previousUnit;
    float presentUnit;
};
float generateBill(struct Bill temp){
    float diff;
    diff = temp.presentUnit - temp.previousUnit;
    if(diff > 20){
        return diff*4.75;
    }else{
        return 20*4.75+(diff-20)*7.75;
    }
}
int main(){
    struct Bill bill; 
    printf("Fill up the following: \n");
    printf("First Name: ");
    gets(bill.firstName); 
    printf("Last Name: ");
    gets(bill.lastName);
    printf("Address: ");
    gets(bill.Address);
    printf("Previous Unit: ");
    scanf("%f",&bill.previousUnit);
    printf("Present Unit: ");
    scanf("%f",&bill.presentUnit);
	printf("\a\n\nElectricity Bill\n\n\a");
    printf("Name: %s %s",bill.firstName,bill.lastName);
    printf("\nAddress: %s",bill.Address);
    printf("\nPrevious Unit: %.3f       Current Unit: %.3f",bill.previousUnit,bill.presentUnit);
    printf("\nCost: %.3f\n\n", generateBill(bill));
    return 0;
}