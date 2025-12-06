/*This code is for checking whether a number is Armstrong or not.
The digits of the number must be raised to the power of the number of digits and then added together.*/

#include <stdio.h>

int main() {
	
    int n, m, k, i, ragham, javab, sum;

    scanf("%d", &n);

    m = n;
    k = 0;
    sum = 0;
    
    while (m > 0) {
    	
    	
        k = k + 1;
        m = m / 10;
        
    }

    while (n > 0) {
    	
        ragham = n % 10;
        javab = 1;
        i = 0;
        
        while(i < k) {
        
        javab = javab * ragham;
        i++;
        	
		}

        sum = sum + javab;
        n = n / 10;
    }

    printf("%d", sum);

    return 0;
}