#include <iostream>
#include <cstring>

using namespace std;

const int SMAX = 22;
const int SMAX2 = 44;

void funcao(char s1[], char s2[], char s3[], int p){
    int i = 0, j = 0, k = 0, aux, q;
    aux = strlen(s1) + strlen(s2);
    q = p;
    while(i != q){
        s3[i] = s1[i];
        i++;
    }
    if(i == q){
        for(j = 0; j < strlen(s2); j++){
            s3[i+j] = s2[j];
        }  
    }
    for(k = i+j; k < aux; k++, i++){
        s3[k] = s1[i];
    }
    s3[k] = '\0';
    
    
    cout << s3;
    
}

int main()
{
    char s1[SMAX], s2[SMAX], s3[SMAX2];
    int p;
    
    cin.getline(s1, SMAX);
    cin.getline(s2, SMAX);
    cin >> p;
    
    funcao(s1, s2, s3, p);

    return 0;
}