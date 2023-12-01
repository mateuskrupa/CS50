#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start_llamas;
    do
    {
        start_llamas = get_int("Start size: ");
    }
    while (start_llamas < 9);

    // TODO: Prompt for end size
    int end_llamas;
    do
    {
        end_llamas = get_int("End size: ");
    }
    while (end_llamas < start_llamas);

    // TODO: Calculate number of years until we reach threshold
    int born;
    int dead;
    int year = 0;
    int total_llamas = 0;

    if (start_llamas == end_llamas)
    {
        year = 0;
    }
    else
    {
        do
        {
            born = start_llamas / 3;
            dead = start_llamas / 4;

            total_llamas = (start_llamas + born) - dead;
            start_llamas = total_llamas;

            year++;
        }
        while (start_llamas < end_llamas);
    }

    // TODO: Print number of years
    printf("Years: %i\n", year);
}
