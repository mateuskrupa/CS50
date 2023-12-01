#include <cs50.h>
#include <stdio.h>

int contarDigitos(long num)
{
    int contador = 0;

    if (num == 0)
    {
        return 1;
    }

    while (num != 0)
    {
        num /= 10;
        contador++;
    }
    return contador;
}

int main(void)
{
    long num = get_long("Number: ");

    int quantidadeDigitos = contarDigitos(num);

    int sixteen = num % 10;
    int fifteen = (num / 10) % 10;
    int fourteen = ((num / 10) / 10) % 10;
    int thirteen = (((num / 10) / 10) / 10) % 10;
    int twelve = ((((num / 10) / 10) / 10) / 10) % 10;
    int eleven = (((((num / 10) / 10) / 10) / 10) / 10) % 10;
    int ten = ((((((num / 10) / 10) / 10) / 10) / 10) / 10) % 10;
    int nine = (((((((num / 10) / 10) / 10) / 10) / 10) / 10) / 10) % 10;
    int eight = ((((((((num / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) % 10;
    int seven = (((((((((num / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) % 10;
    int six = ((((((((((num / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) % 10;
    int five = (((((((((((num / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) % 10;
    int four = ((((((((((((num / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) % 10;
    int three = (((((((((((((num / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) % 10;
    int two = ((((((((((((((num / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) % 10;
    int one = (((((((((((((((num / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) / 10) % 10;

    int mx1 = one*2;
    int mx2 = three*2;
    int mx3 = five*2;
    int mx4 = seven*2;
    int mx5 = nine*2;
    int mx6 = eleven*2;
    int mx7 = thirteen*2;
    int mx8 = fifteen*2;

    int mx9 = 0;
    int mx10 = 0;
    int mx11 = 0;
    int mx12 = 0;
    int mx13 = 0;
    int mx14 = 0;
    int mx15 = 0;
    int mx16 = 0;

    int sum = 0;

    if (quantidadeDigitos == 15)
    {
    if (mx2 / 10 != 0)
    {
        mx10 = mx2 % 10;
        mx2 = mx2 / 10;
        sum = sum + mx2 + mx10;
    }
    else
    {
        sum = sum + mx2;
    }

    if (mx3 /10 !=0)
    {
        mx11 = mx3 % 10;
        mx3 = mx3 / 10;

        sum = sum + mx3 + mx11;
    }
    else
    {
        sum = sum + mx3;
    }

    if (mx4 /10 !=0)
    {
        mx12 = mx4 % 10;
        mx4 = mx4 / 10;

        sum = sum + mx4 + mx12;
    }
    else
    {
        sum = sum + mx4;
    }

    if (mx5 /10 !=0)
    {
        mx13 = mx5 % 10;
        mx5 = mx5 / 10;

        sum = sum + mx5 + mx13;
    }
    else
    {
        sum = sum + mx5;
    }

    if (mx6 /10 !=0)
    {
        mx14 = mx6 % 10;
        mx6 = mx6 / 10;

        sum = sum + mx6 + mx14;
    }
    else
    {
        sum = sum + mx6;
    }

    if (mx7 /10 !=0)
    {
        mx15 = mx7 % 10;
        mx7 = mx7 / 10;

        sum = sum + mx7 + mx15;
    }
    else
    {
        sum = sum + mx7;
    }

    if (mx8 /10 !=0)
    {
        mx16 = mx8 % 10;
        mx8 = mx8 / 10;

        sum = sum + mx8 + mx16;
    }
    else
    {
        sum = sum + mx8;
    }
    }
    else if (quantidadeDigitos == 16) //2
    {

    if (mx1 /10 !=0)
    {
        mx9 = mx1 % 10;
        mx1 = mx1 / 10;

        sum = sum + mx1 + mx9;
    }
    else
    {
        sum = sum + mx1;
    }

    if (mx2 /10 !=0)
    {
        mx10 = mx2 % 10;
        mx2 = mx2 / 10;

        sum = sum + mx2 +  mx10;
    }
    else
    {
        sum = sum + mx2;
    }

    if (mx3 /10 !=0)
    {
        mx11 = mx3 % 10;
        mx3 = mx3 / 10;

        sum = sum + mx3 + mx11;
    }
    else
    {
        sum = sum + mx3;
    }

    if (mx4 /10 !=0)
    {
        mx12 = mx4 % 10;
        mx4 = mx4 / 10;

        sum = sum + mx4 + mx12;
    }
    else
    {
        sum = sum + mx4;
    }

    if (mx5 /10 !=0)
    {
        mx13 = mx5 % 10;
        mx5 = mx5 / 10;

        sum = sum + mx5 + mx13;
    }
    else
    {
        sum = sum + mx5;
    }

    if (mx6 /10 !=0)
    {
        mx14 = mx6 % 10;
        mx6 = mx6 / 10;

        sum = sum + mx6 + mx14;
    }
    else
    {
        sum = sum + mx6;
    }

    if (mx7 /10 !=0)
    {
        mx15 = mx7 % 10;
        mx7 = mx7 / 10;

        sum = sum + mx7 + mx15;
    }
    else
    {
        sum = sum + mx7;
    }

    if (mx8 /10 !=0)
    {
        mx16 = mx8 % 10;
        mx8 = mx8 / 10;

        sum = sum + mx8 + mx16;
    }
    else
    {
        sum = sum + mx8;
    }
    }
    else if (quantidadeDigitos == 13) //3
    {

    if (mx3 /10 !=0)
    {
        mx11 = mx3 % 10;
        mx3 = mx3 / 10;

        sum = sum + mx3 + mx11;
    }
    else
    {
        sum = sum + mx3;
    }

    if (mx4 /10 !=0)
    {
        mx12 = mx4 % 10;
        mx4 = mx4 / 10;

        sum = sum + mx4 + mx12;
    }
    else
    {
        sum = sum + mx4;
    }

    if (mx5 /10 !=0)
    {
        mx13 = mx5 % 10;
        mx5 = mx5 / 10;

        sum = sum + mx5 + mx13;
    }
    else
    {
        sum = sum + mx5;
    }

    if (mx6 /10 !=0)
    {
        mx14 = mx6 % 10;
        mx6 = mx6 / 10;

        sum = sum + mx6 + mx14;
    }
    else
    {
        sum = sum + mx6;
    }

    if (mx7 /10 !=0)
    {
        mx15 = mx7 % 10;
        mx7 = mx7 / 10;

        sum = sum + mx7 + mx15;
    }
    else
    {
        sum = sum + mx7;
    }

    if (mx8 /10 !=0)
    {
        mx16 = mx8 % 10;
        mx8 = mx8 / 10;

        sum = sum + mx8 + mx16;
    }
    else
    {
        sum = sum + mx8;
    }
    }
    else
    {
        printf("INVALID\n");
        return 0;
    }

    int cvc = sum+two+four+six+eight+ten+twelve+fourteen+sixteen;
    printf("%i\n", cvc);

    string card_type = "INVALID";

    if (two == 3)
    {
        if (three == 4 || three == 7)
        {
            card_type = "AMEX";
        }
    }

    if (one == 5)
    {
        if (two == 1 || two == 2 || two == 3 || two == 4 || two == 5)
        {
            card_type = "MASTERCARD";
        }
    }

    if (one == 4)
    {
        card_type = "VISA";
    }

    if (four == 4 && one == 0)
    {
        card_type = "VISA";
    }

    if (cvc % 10 != 0)
    {
        printf("INVALID\n");
    }
    else
    {
        printf("%s\n", card_type);
    }
}