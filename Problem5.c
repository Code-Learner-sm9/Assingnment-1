#include <stdio.h>
int main() {
    long long int Taka;
    scanf("%lld",&Taka);
    if(Taka>1000)
    {
        printf("I will buy Punjabi\n");
        if(Taka>=1500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes");
        }
    }
    else
    {
        printf("Bad luck!");
    }

    return 0;
}
