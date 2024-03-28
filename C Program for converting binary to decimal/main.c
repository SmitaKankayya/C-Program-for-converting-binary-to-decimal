//
//  main.c
//  C Program for converting binary to decimal
//
//  Created by Smita Kankayya on 28/03/24.
//

#include <stdio.h>
#include <math.h>

int main(void)
{
    int N = 11011;
    
    int a = 1;       // Initializing base value a to 1
    int ans = 0;
    while (N != 0) {
        ans = ans + (N % 10) * a;
        N = N / 10;
        a = a * 2;
    }
    
    printf("%d\n", ans);
    return 0;
}
