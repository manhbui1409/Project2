#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, square, cube, fourth_power;

    printf("Nhap vào mot so a: ");
    scanf("%f", &a);

    square = a * a;
    cube = a * a * a;
    fourth_power = a * a * a * a;

    printf("a^2 = %.2f\n", square);
    printf("a^3 = %.2f\n", cube);
    printf("a^4 = %.2f\n", fourth_power);

	printf("\n_______________________________") ;
	int ngay, thang, nam;

    printf("\nNhap ngày: ");
    scanf("%d", &ngay);

    printf("\n Nhap tháng: ");
    scanf("%d", &thang);

    printf("\n Nhap nãm: ");
    scanf("%d", &nam);

    printf("\n Ngày tháng nãm là: %02d/%02d/%04d", ngay, thang, nam);
    printf("\n _______________________________________");
    printf("y c : ");
    float num1, num2;

    printf("\n Nhap so thu nhat: ");
    scanf("%f", &num1);

    printf("\n Nhap so thu hai: ");
    scanf("%f", &num2);

    printf("Tong: %.2f\n", num1 + num2);
    printf("Hieu: %.2f\n", num1 - num2);
    printf("Tích: %.2f\n", num1 * num2);

    if (num2 != 0) {
        printf("\nThuong: %.2f\n", num1 / num2);
    } else {
        printf("\nKhông th? chia cho 0.\n");
    }
    

}
