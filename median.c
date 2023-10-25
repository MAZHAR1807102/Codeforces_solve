#include<stdio.h>
#include<string.h>
int main()
{
    int i, length, med, med_1, pre_median;
    float median;
    char series[100001];
    for(i = 0; i = EOF; i++){
        scanf("%c", &series[i]);
    }

    length = strlen(series);
    if(length % 2 == 0){
        med = (length/2);
        med_1 = med + 1;
        pre_median = series[med] + series[med_1];
        median = pre_median / 2;
    }
    if(length % 2 == 1){
        median = series[med_1];
    }
    print("%0.1f", series);
    return 0;
}
