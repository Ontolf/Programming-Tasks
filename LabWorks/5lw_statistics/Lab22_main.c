#include <stdio.h>

void Sort(char str[], int cnt){
    
    int i = 0, j = 0;
    
    for( i = 0; i < cnt - 1; i ++){
        for(j = i + 1; j < cnt ; j ++){
            
               if(str[i] > str[j]){
                
                char tmp = str[i];
                str[i] = str[j];
                str[j] = tmp;
            }
        }
    }
}

char Max_Min(char str[], int n, unsigned char *max, unsigned char *min){
    
    int i = 0;
    
    for(i = 0; i < n; i ++){
        
        if(str[i] > *max){
            *max = str[i];
        }
        if(str[i] < *min){
            *min = str[i];
        }
    }
}

char Avr_val(char str[], int n, float *avr){
    int i = 0;
    for(i = 0; i < n; i++){
        *avr += str[i];
    }
}

char Modes(char str[], int cn[], char c[], int n){
    int i = 0;
    int cnt = 1;
    int j = 0;
    char c2[10000];
    
    c2[0] = str[0];
    while(c2[0] == str[j]){
        cn[0] += 1;
        j++;
     }
     
    for(i = 0; i < n; i++){
        
        if((str[i] == str[i + 1]) && (str[i] != c2[cnt - 1])){
            c2[cnt] = str[i];
            cn[cnt] = 1;
            j = i + 1;
                 while(c2[cnt] == str[j]){
                    cn[cnt] += 1;
                    j++;
                 }
            cnt += 1;
        }
    }
    int nn = 0;
    for(i = 0; i < cnt; i++){
        if(nn < cn[i]){
            c[0] = c2[i];
            nn = cn[i];
        }
    }

    i = 0;
    j = 1;
    for(i = 0; i < cnt; i++){
        if(nn == cn[i] && c[0] != c2[i]){
               c[j] = c2[i];
               j++;
        }
    }
}

void main()
{
    char str[10000], c[10000];
    unsigned char max = 0, min = 255;
    int  cn[10000];
    printf(" Enter string:\n");
    scanf(" %[^\n]", str);
    
    printf(" Your string is: %s \n", str);
    int n = strlen(str);
    Sort(str, n);
    printf(" Your sorted string is: %s \n", str);
    
    printf(" Corresponding symbol string ASCII is: \n");
    int i = 0;
    for(i; i < n; i++){
        printf("%d ", str[i]);
    }
    printf("\n");
  
    Max_Min(str, n, &max, &min);
    printf(" Max and min chars are:\n max: %c\n min: %c\n ", max, min);
    
    int n2 = n/2;
    if( n % 2 == 0){
        
        printf(" Median is between: %c and %c\n", str[n2 - 1], str[n2]);
        
    } else printf("Median is: %c\n", str[n2]);
    
    float avr = 0;
    Avr_val(str, n, &avr);
    printf(" Your average value is: %.1f\n", avr/n);
    
    Modes(str, cn, c, n);
    int n3 = strlen(c);
    printf(" Your modes are:");
    for( int i = 0; i < n3; i++){
        printf(" %c", c[i]);
    }
}
