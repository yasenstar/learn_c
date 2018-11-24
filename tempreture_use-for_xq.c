#include <stdio.h>
/* 当fahr= 0, 10, ..., 300时，分别打印华氏温度和摄氏温度对照表 */
int main() {

    int fahr;

    for (fahr = 0; fahr <= 300; fahr+=20) {
        printf ( "%3d %6.1f\n", fahr, (5.0/9.0*(fahr-32)));
    }

    for (fahr = 300; fahr >= 0; fahr-=20) {
        printf ( "%3d %6.1f\n", fahr, (5.0/9.0*(fahr-32)));
    }
}