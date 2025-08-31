// Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include <stdio.h>

int main() {
    float cp, sp, profit, loss, percentage;

    printf("Enter Cost Price: ");
    scanf("%f", &cp);
    printf("Enter Selling Price: ");
    scanf("%f", &sp);

    if (sp > cp) {
    
        profit = sp - cp;
        percentage = (profit / cp) * 100;
        printf("Profit = %.2f\n", profit);
        printf("Profit Percentage = %.2f%%\n", percentage);
    }
    else if (cp > sp) {
     
        loss = cp - sp;
        percentage = (loss / cp) * 100;
        printf("Loss = %.2f\n", loss);
        printf("Loss Percentage = %.2f%%\n", percentage);
    }
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
