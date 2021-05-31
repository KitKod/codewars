//
// Created by nikitakamak on 26.05.21.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "katas.h"


bool compare_x_o_chars(const char* str)
{
    int x_count = 0;
    int o_count = 0;

    for (int i = 0; str[i] != 0; i++)
    {
        printf("char->%c\n", str[i]);
        char mass[2];
        mass[0] = str[i];
        mass[1] = '\0';
        int x_r = strcasecmp(mass, "x");
        int o_r = strcasecmp(mass, "o");

        if (!x_r)
        {
            x_count++;
        }
        else if (!o_r)
        {
            o_count++;
        }
    }
    return o_count == x_count;
}

int nbYear(int p0, double percent, int aug, int p)
{
    int current_p = p0;
    int year_count = 0;

    for (; current_p < p; year_count++)
    {
        current_p = current_p + ((current_p * percent) / 100) + aug;
    }

    return year_count;
}

char* longest(char* s1, char* s2)
{
    int len_s1 = strlen(s1);
    int len_s2 = strlen(s2);

    int max_len = (len_s1 > len_s2) ? len_s1 : len_s2;

    printf("max_l=%d\n", max_len);

    char *c = "a";
    return c;
}
