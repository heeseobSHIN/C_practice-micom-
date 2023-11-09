#include <stdio.h>

void main(void) {
	
    int select;  // ‘I‘ğˆ‚ğŠi”[‚·‚é•Ï”
    int r;       // ‰~‚Ì”¼Œa‚ğŠi”[‚·‚é•Ï”
    int h;       // ‚‚³‚ğŠi”[‚·‚é•Ï”
    float res;   // Œ‹‰Ê‚ğŠi”[‚·‚é•Ï”
    
    printf("‰~ : 0, ‰~’Œ : 1, ‚»‚Ì‘¼ : error\n");
    scanf("%d", &select);
    
    if (select == 0) {
	    
        // ‰~‚ÌŒvZ
        printf("r‚ğ“ü—Í : ");
        scanf("%d", &r);
	
        printf("‚ˆ‚ğ“ü—Í : ");
        scanf("%d", &h);
	
        res = (1.0 / 3.0) * 3.14 * r * r * h;
        printf("%f", res);
	
    } else if (select == 1) {
	    
        // ‰~’Œ‚ÌŒvZ
        printf("r‚ğ“ü—Í : ");
        scanf("%d", &r);
	
        printf("‚ˆ‚ğ“ü—Í : ");
        scanf("%d", &h);
	
        res = 3.14 * r * r * h;
        printf("%f", res);
	
    } else {
	    
        // ƒGƒ‰[ƒƒbƒZ[ƒW
        printf("'0.0'");
    }
    
    while (1);
}
