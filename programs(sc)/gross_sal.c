    #include <stdio.h>
void main() {
    float base_sal, gross_sal, da, hra, convience;
    printf("Enter base salary: ");
    scanf("%f", &base_sal);
    if (base_sal >= 5000) {
        da = 0.11 * base_sal;
        hra = 0.2 * base_sal;
        convience = 500;
    } else if (base_sal >= 3000 && base_sal < 5000) {
        da = 0.1 * base_sal;
        hra = 0.15 * base_sal;
        convience = 400;
    } else {
        da = 0.09 * base_sal;
        hra = 0.1 * base_sal;
        convience = 300;
    }
    gross_sal = base_sal + da + hra + convience;
    printf("Gross salary: %.2f", gross_sal);
}
