#include<iostream>
#include<string.h>
using namespace std;

bool KiemTraTen(char name[]){
    for(int i=0; i < strlen(name);i++)
        if((name[i]<'A'  || name[i]>'z'||(int)name[i]>=91 and name[i]<=6) and (int)name[i]!= 32)
            return false;
    return true;
}

void xoa(char name[], int x){
    for(int i=x;i<strlen(name);i++){
        name[i]=name[i+1];
    }
}

char Delete_space(char name[]){
    for(int i=0; i<strlen(name);i++)
        if( name[i]==' ' and name[i+1]==' '){ 
            xoa(name, i);
            i--;
        }
    if(name[0]==' ')
        xoa(name, 0);    
    }

int main(){
    char name[50], ho[10];
    do{
        cout<<"Nhap ten :";
        cin.getline(name, 50);
    }while(!KiemTraTen(name));
    cout<<"Xau da nhap la : "<<name<<endl;
    Delete_space(name);
    cout<<"Xau da chuan hoa la : "<<name<<endl;
    return 0;
}
 