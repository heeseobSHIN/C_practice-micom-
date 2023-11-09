#include <stdio.h>

void main(void);

// Œ‹‰Ê‚Ì\‘¢‘Ì
struct Result {
    float value1;  // ’l1
    float value2;  // ’l2
};

// —§•û‘Ì‚Ì‘ÌÏ‚Æ•\–ÊÏ‚ğŒvZ‚·‚éŠÖ”
void cubic(float Transverse, float length, float Height, struct Result *result) {
    result->value1 = Transverse * length * Height;
    result->value2 = (Transverse * length + Height * length + Transverse * Height) * 2.0;
}

// ‰~’Œ‚Ì‘ÌÏ‚Æ•\–ÊÏ‚ğŒvZ‚·‚éŠÖ”
void cylinder(float radius, float Height, struct Result *result) {
    result->value1 = radius * radius * 3.14 * Height;
    result->value2 = (2.0 * 3.14 * radius * radius) + (2.0 * 3.14 * radius * Height);
}

// ‰~‚Ì‘ÌÏ‚Æ•\–ÊÏ‚ğŒvZ‚·‚éŠÖ”
void cone(float radius, float Height, struct Result *result) {
    result->value1 = radius * radius * 3.14 * (1.0 / 3.0) * Height;
    result->value2 = 3.14 * radius * radius + 3.14 * radius * Height;
}

// ‹…‚Ì‘ÌÏ‚Æ•\–ÊÏ‚ğŒvZ‚·‚éŠÖ”
void sphere(float radius, struct Result *result) {
    result->value1 = radius * radius * radius * 3.14 * (4.0 / 3.0);
    result->value2 = 4.0 * 3.14 * radius * radius;
}

// ƒƒCƒ“ŠÖ”
void main(void) {
    int select;
    float x, y, h, r;
    struct Result result;

    printf("—§•û‘Ì‚Í‚PA‰~’Œ‚Í‚QA‰~‚Í‚RA‹…‚Í‚S : ");
    scanf("%d", &select);

    if (select == 1) {
        printf("\nx: ");
        scanf("%f", &x);
        printf("\ny: ");
        scanf("%f", &y);
        printf("\nh: ");
        scanf("%f", &h);
        cubic(x, y, h, &result);
        printf("—§•û‘Ì‚Ì‘ÌÏ = %.4f •\–ÊÏ = %.4f", result.value1, result.value2);
    } else if (select == 2) {
        printf("\nr : ");
        scanf("%f", &r);
        printf("\nh: ");
        scanf("%f", &h);
        cylinder(r, h, &result);
        printf("‰~’Œ‚Ì‘ÌÏ = %.4f •\–ÊÏ = %.4f", result.value1, result.value2);
    } else if (select == 3) {
        printf("\nr : ");
        scanf("%f", &r);
        printf("\nh: ");
        scanf("%f", &h);
        cone(r, h, &result);
        printf("‰~‚Ì‘ÌÏ = %.4f •\–ÊÏ = %.4f", result.value1, result.value2);
    } else if (select == 4) {
        printf("\nr : ");
        scanf("%f", &r);
        sphere(r, &result);
        printf("‹…‚Ì‘ÌÏ = %.4f •\–ÊÏ = %.4f", result.value1, result.value2);
    }

    while (1);
}
