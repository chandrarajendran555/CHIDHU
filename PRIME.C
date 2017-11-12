include <stdio.h>
void main()
{
    int n, c, rem, result = 0;

    printf("Enter a integer: ");
    scanf("%d", &n);

    c = n;

    while (c != 0)
    {
        rem = c%10;
        result += rem*rem*rem;
       c /= 10;
    }

    if(result == n)
        printf("%d is an Armstrong number.",n);
    else
        printf("%d is not an Armstrong number.",n);

}

  
