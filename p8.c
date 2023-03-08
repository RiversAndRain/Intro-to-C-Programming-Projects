#include <stdio.h>

int main (void)
{
    FILE *fp_out;

    char *str1 = "Four score and seven years ago our";
    char *str2 = "fathers brought forth on this continent,";
    char *str3 = "a new nation, conceived in Liberty and dedicated";
    char *str4 = "to the proposition that all men are created equal.";

    fp_out = fopen("my_file.txt", "w");

    if (fp_out != NULL)
    {
        fprintf(fp_out, "%s\n", str1);
        fprintf(fp_out, "%s\n", str2);
        fprintf(fp_out, "%s\n", str3);
        fprintf(fp_out, "%s\n", str4);

        fclose(fp_out);
    }
    else 
        printf("I couldn't open the file \"my_file\".\n");
    
    return 0;
}