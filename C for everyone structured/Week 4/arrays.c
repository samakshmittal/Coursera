#include <stdio.h>
int main()
{
    FILE *input_file, *output_file;
    int how_many, i, j, sum=0;
    float avg=0.0;
    input_file = fopen("input integer file.txt", "r");
    output_file = fopen("output file.txt", "w+");
    rewind(input_file);
    fscanf(input_file, "%d", &how_many);
    int numberArray[how_many];
    for (i = 0; i < how_many; i++)
    {
        fscanf(input_file, "%d", &numberArray[i]);
    }
    printf("The values of the array are:\n");
    fprintf(output_file, "The values of the array are:\n");
    for (i=0; i<how_many; i++)
    {
        printf("%d\t", numberArray[i]);
        fprintf(output_file, "%d\t", numberArray[i]);
    }
    for (j = 0; j < how_many; j++)
    {
        sum = sum + numberArray[j];
    }
    avg = (float)sum / j;
    printf("\nAverage of array values is %f", avg);
    fprintf(output_file, "\nAverage of array values is %f", avg);
    for (i = 1; i < how_many; ++i)
    {
        if (numberArray[0] < numberArray[i])
        numberArray[0] = numberArray[i];
    }
    printf("\nMaximum value = %d\n\n", numberArray[0]);
    fprintf(output_file, "\nMaximum value = %d\n\n", numberArray[0]);
    fclose(output_file);
return 0;
}