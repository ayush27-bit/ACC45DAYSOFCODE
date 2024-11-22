#include <stdio.h>

int main() {
 int T;
    int count_even, count_odd;

    scanf("%d", &T);
    while(T--) {
        int N;
        scanf("%d", &N);
        count_even = 0;
        count_odd = 0;
        
        for(int i = 1; i <= sqrt(N); i++) {
            if(N % i == 0) {
                if(i % 2 == 0) {
                    count_even++;
                } else {
                    count_odd++;
                }
                if(i != N / i) {
                    if((N / i) % 2 == 0) {
                        count_even++;
                    } else {
                        count_odd++;
                    }
                }
            }
        }
        
        if(count_even > count_odd) {
            printf("1\n");
        } else if(count_even == count_odd) {
            printf("0\n");
        } else {
            printf("-1\n");
        }
    }
    return 0;
}

