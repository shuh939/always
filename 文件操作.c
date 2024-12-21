#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() 
{
    freopen("a.in", "r", stdin);
    freopen("a.out", "w", stdout);
    
    char s[1000][1000];
    int j = 0;
    while (1) 
	{
        fgets(s[j],sizeof(s[j]),stdin);
        if (strcmp(s[j], "-1") == 0) {
            break;
        }
        j++;
    }
    for (int i = 0; i <j - 1; i++) {
        for (int k = i + 1; k < j; k++) {
            if (strcmp(s[i], s[k]) > 0) {
                char temp[1000];
                strcpy(temp, s[i]);
                strcpy(s[i], s[k]);
                strcpy(s[k], temp);
            }
        }
    }
    
    for (int i = 0; i < j; i++) {
        printf("%s\n", s[i]);
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}
