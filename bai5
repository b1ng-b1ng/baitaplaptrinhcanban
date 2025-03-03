#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, x1, x2;

    // Nhập hệ số
    printf("Nhap he so a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Trường hợp a == 0
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh co vo so nghiem\n");
            } else {
                printf("Phuong trinh vo nghiem\n");
            }
        } else {
            x1 = -c / b;
            printf("Phuong trinh co mot nghiem: x = %.2lf\n", x1);
        }
    } else {
        // Tính delta
        delta = b * b - 4 * a * c;

        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co hai nghiem phan biet:\n");
            printf("x1 = %.2lf\n", x1);
            printf("x2 = %.2lf\n", x2);
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x = %.2lf\n", x1);
        } else {
            double realPart = -b / (2 * a);
            double imagPart = sqrt(-delta) / (2 * a);
            printf("Phuong trinh co hai nghiem phuc:\n");
            printf("x1 = %.2lf + %.2lfi\n", realPart, imagPart);
            printf("x2 = %.2lf - %.2lfi\n", realPart, imagPart);
        }
    }

    return 0;
}
