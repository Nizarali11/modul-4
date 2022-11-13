#include <stdio.h>

int main() { 

    int hari, jam, menit, detik, x;
    scanf("%d", &x);

    hari= x / (24*3600);
    jam= x % (24*3600)/3600;
    menit= x % 3600/60;
    detik= x %60;

    if(x<=86400) {
    printf("%02d:%02d:%02d", jam, menit, detik);
    } else if(x>86400) {
        printf("%d hari %02d:%02d:%02d", hari, jam, menit, detik);
    }

    return 0;
}