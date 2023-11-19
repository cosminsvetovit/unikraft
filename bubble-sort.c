#include<stdio.h>
#define N 100
void bubble_sort(int v[], int n) {  
  int i, j;  
  for (i = 0; i < n - 1; i++) {  
    for (j = 0; j < n - i - 1; j++) {  
      if (v[j] > v[j + 1]) {  
        int aux = v[j];  
        v[j] = v[j + 1];  
        v[j + 1] = aux;  
      }  
    }  
  }  
}  
int main(){
    int n;
    scanf("%d",&n);
    int a[N];
    int i;
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    bubble_sort(a, n);
    for(i=0;i<n;i++)printf("%d ", a[i]);
}

