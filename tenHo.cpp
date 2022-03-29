#include<iostream>
#include<string.h>
#define max 50

using namespace std;

int main()
{
    char s[max], a[max], d[max];
    int j = 0, k = 0;

    cout << "Nhap ho ten: "; cin.getline(s,100);

    for(int i = strlen(s)-1; i >= 0 && s[i] != ' '; i--) 
    {
        a[j++] = s[i];
        a[j]='\0';
    }
    for(int i = 0; i < strlen(a)/2 ; i++)
    {
        char tc = a[i];
        a[i] = a[strlen(a)-1-i];
        a[strlen(a)-1-i] = c;
    }
    for(int i = 0; i < strlen(s) && s[i] != ' '; i++)
    {
        d[k++] = s[i];
        d[k] = '\0';
    }
    cout << "Ho: " << d << endl;
    cout << "Ten: " << a << endl;    
    return 0;
}



