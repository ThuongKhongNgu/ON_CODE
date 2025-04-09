#include <stdio.h>
#include <math.h>
int main() {
    float bien_a, bien_b, bien_c;
    float delta, x1, x2;

    printf("Nhap bien a: ");
    scanf("%f", &bien_a);
    printf("Nhap bien b: ");
    scanf("%f", &bien_b);
    printf("Nhap bien c: ");
    scanf("%f", &bien_c);

    // Tính delta
    delta = (bien_b * bien_b) - (4 * bien_a * bien_c);

    if (delta > 0) {
        x1 = (-bien_b + sqrt(delta)) / (2 * bien_a);
        x2 = (-bien_b - sqrt(delta)) / (2 * bien_a);
        printf("Phuong trinh co hai nghiem phan biet:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    } else if (delta == 0) {
        x1 = -bien_b / (2 * bien_a);
        printf("Phuong trinh co mot nghiem kep:\n");
        printf("x = %.2f\n", x1);
    } else {
        printf("Phuong trinh vo nghiem hoac co nghiem phuc \n");
    }
}

