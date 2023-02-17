#include <stdio.h>

int main() {
    int n;
    scanf("%i",&n);
    if (n == 0){
        printf("%i is zero\n",n);
    }else if ( n > 0 ){
        printf("%i is positive\n",n);
    }else if ( n < 0 ){
        printf("%i is negative\n",n);
    }else{
        return -1;
    }

    return 0;
}
