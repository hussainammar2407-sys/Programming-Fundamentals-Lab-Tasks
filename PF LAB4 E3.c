#include <stdio.h>
#include <math.h>
int main() {
    int a, b, c, discriminant, rootA, rootB, root, realRootA, imgRootA, realRootB, imgRootB;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    printf("Enter the value of c: ");
    scanf("%d", &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        rootA = (-b + sqrt(discriminant)) / (2 * a);
        rootB = (-b - sqrt(discriminant)) / (2 * a);
        printf("1st root is %d\n", rootA);
        printf("2nd root is %d\n", rootB);
    } else if (discriminant == 0) {
        root = -b / (2 * a);
        printf("root is %d\n", root);
    } else {
        realRootA = -b / (2 * a);
        imgRootA = sqrt(-discriminant);
        realRootB = -b / (2 * a);
        imgRootB = -sqrt(-discriminant);
        printf("1st root is %d + %di\n", realRootA, imgRootA);
        printf("2nd root is %d + %di\n", realRootB, imgRootB);
    }

    return 0;
}
