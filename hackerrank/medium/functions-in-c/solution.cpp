#include <stdio.h>

// 1. Move the function definition here (ABOVE main)
int max_of_four(int a, int b, int c, int d) {
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;
    }
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    // 2. Now this function call will work correctly
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
