#include <iostream>
using namespace std;
int main()
{   
    int casos,m,h;
    scanf("%d",&casos);
    while(casos--) {
        scanf("%d:%d",&h,&m);
        m = (60 - m) %60;
        h = 12 -h;
        if (m > 0) h--;
        h = (h+12)%12;
        if (h == 0) h = 12;
        printf("%02d:%02d\n", h, m);
    }
    return 0;
}
