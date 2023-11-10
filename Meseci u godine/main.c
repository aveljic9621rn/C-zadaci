#include <stdio.h>
#include <stdlib.h>

int main()
{
    int god = 0, mesec;
    printf("Unesi broj meseci: ");
    scanf("%d", &mesec);
    while(mesec)
    {
        mesec -= 12;
        god++;
        if(mesec < 12)
            break;
    }
    if(god == 1)
    {
        switch(mesec)
        {
        case 0:
            printf("1 godina i 0 meseci");
            break;
        case 1:
            printf("1 godina i 1 mesec");
            break;
        case 2: printf("1 godina i 2 meseca", mesec);
            break;
        case 3: printf("1 godina i 3 meseca", mesec);
            break;
        case 4: printf("1 godina i 4 meseca", mesec);
            break;

        default:
            printf("1 godina i %d meseci", mesec);
            break;

        }
    }
    if(god > 1 && god < 5)
    {
        switch(mesec)
        {
        case 0:
            printf("%d godine i 0 meseci", god);
            break;
        case 1:
            printf("%d godine i 1 mesec");
            break;
        case 2:
        case 3:
        case 4:
            printf("%d godine i %d meseca", god, mesec);
            break;
        default:
            printf("%d godine i %d meseci", god, mesec);
            break;

        }
    }
    if(god >= 5)
    {
        switch(mesec)
        {
        case 0:
            printf("%d godina i 0 meseci", god);
            break;
        case 1:
            printf("%d godina i 1 mesec", god);
            break;
        case 2:
        case 3:
        case 4:
            printf("%d godina i %d meseca", god, mesec);
            break;
        default:
            printf("%d godina i %d meseci", god, mesec);
            break;

        }
    }
    if(god == 0)
    {
        switch(mesec)
        {
        case 0:
            printf("0 godina i 0 meseci", god);
            break;
        case 1:
            printf("0 godina i 1 mesec");
            break;
        case 2:
        case 3:
        case 4:
            printf("0 godina i %d meseca", mesec);
            break;
        default:
            printf("0 godina i %d meseci", mesec);
            break;

        }
    }
    return 0;
}
