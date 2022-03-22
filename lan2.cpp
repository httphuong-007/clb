#include <iostream>
#include <conio.h>
using namespace std;

void nhap(int a[], int n){
    for (int i = 0; i < n; i++ )
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}
void xuat(int a[], int n)
{for (int i = 0; i < n; i++)
	{
        cout << a[i]<<"\t";           
    }

}	

void xuatchan(int a[], int n)
{
    for (int i = 0; i < n; i++)
    if(a[i]%2 == 0){
        cout << a[i]<<"\t";           
    }
}
	

void tangdan( int a[], int n )
{	int tg;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
}
void xuatle(int a[], int n)
{for (int i = 0; i < n; i++)
    if(a[i]%2 != 0){
        cout << a[i]<<"\t";
	           
    }
}
void giamdan( int a[], int n )
{	int tg;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i]< a[j]){
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
}
void xoa( int a[], int n) {
	int k;
	int dem = 0;
	cout<<"nhap vao x can xoa: ";
	cin>>k;
	for(int i=0; i<n; i++){
		if(a[i]==k){
			dem++;
			for(int j=i;j<n-1;j++){
				a[j] = a[j+1];
			}
			n--;
			i--;
		}
	}
		
	xuat ( a ,n);
}
int main()
{
    int n;
    int a[100];
    cout << "Nhap so phan tu mang n = ";
    cin >> n;
    nhap(a,n);
    cout << "Mang sap xep chan tang dan la: " << endl;
    
    tangdan(a,n);
    xuatchan(a,n);
    cout << endl;
    cout << "Sap xep le giam dan: " << endl;
    giamdan(a,n);
    xuatle(a,n);
    cout<<endl;
    xoa(a,n);
    getche();
    return 0;
    
    
    
}
