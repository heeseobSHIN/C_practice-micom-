#include <stdio.h>

// ŠÖ”‚Ìƒvƒƒgƒ^ƒCƒv
float calculateVolumeOrArea(char shape, int r, int l
);
void main(void);

void main(void) {
    char select;
    int r;
    int h;
    float result;

    printf("1: ‰~‚Ì‘ÌÏ\n");
    printf("2: ‰~’Œ‚Ì‘ÌÏ\n");
    printf("3: ’ê–ÊÏ\n");
    printf("9: ”¼Œar‚Ì‹…‘Ì‚Ì‘ÌÏ\n");
    printf("‚»‚Ì‘¼: 0.0\n");
    printf("‘I‘ğ: ");
    scanf(" %c", &select);

    switch (select) {
        case '1':
            printf("”¼Œar‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢: ");
            scanf("%d", &r);
            printf("‚‚³h‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢: ");
            scanf("%d", &h);
            result = calculateVolumeOrArea(select, r, h);
            break;

        case '2':
            printf("”¼Œar‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢: ");
            scanf("%d", &r);
            printf("‚‚³h‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢: ");
            scanf("%d", &h);
            result = calculateVolumeOrArea(select, r, h);
            break;

        case '3':
            printf("”¼Œar‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢: ");
            scanf("%d", &r);
            result = calculateVolumeOrArea(select, r, 0);
            break;

        case '9':
            printf("”¼Œar‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢: ");
            scanf("%d", &r);
            result = calculateVolumeOrArea(select, r, 0);
            break;

        default:
            result = 0.0;
            break;
    }

    if (result == 0.0) {
        printf("ƒGƒ‰[: 0.0\n");
    } else {
        printf("Œ‹‰Ê: %f\n", result);
    }

    return 0;
}

// ‘ÌÏ‚Ü‚½‚Í’ê–ÊÏ‚ğŒvZ‚·‚éŠÖ”
float calculateVolumeOrArea(char shape, int r, int l
) {
    switch (shape) {
        case '1':
            return 1.0 / 3.0 * 3.14 * r * r * l
            ;

        case '2':
            return 3.14 * r * r * l
            ;

        case '3':
            return 3.14 * r * r;

        case '9':
            return (4.0 / 3.0) * 3.14 * r * r * r;

        default:
            return 0.0;
    }
}
