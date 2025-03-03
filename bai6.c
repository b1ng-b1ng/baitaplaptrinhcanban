#include<stdio.h>
#include<math.h>
	int main(){
	float n;
	scanf("%.2f",&n);
	if(n<5){
		printf("yeu\n");
	}	
    else if (n >= 5 && n < 7) {
        printf("Trung binh\n");
    } else if (n >= 7 && n < 8) {
        printf("Kha\n");
    } else if (n >= 8 && n < 9) {
        printf("Gioi\n");
    } else if (n >= 9 && n <= 10) {
        printf("Xuat sac\n");
    } else {
        printf("sai");
    }

	}
