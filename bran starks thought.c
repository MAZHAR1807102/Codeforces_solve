#include<stdio.h>
int main()
{
    int ax, ay, bx, by, cx, cy, dx, dy;
    int area;
    int n, w, h, i;
    scanf("%d", &n);
    for(i = 1; i <= n; ++i){
        scanf("%d%d%d%d%d%d", &ax, &ay, &bx, &by, &cx, &cy);
        dx = cx - (bx - ax);
        dy = cy - (by - ay);
        w = (ax*by + bx*cy + cx*dy + dx*ay);
        h = (bx*ay + cx*by + dx*cy + ax*dy);

            area = 0.5 * (w - h);
            if(area < 0){
                area = area *(-1);
            }

        printf("case %d: %d %d %d\n",i, dx, dy, area);
    }
}
