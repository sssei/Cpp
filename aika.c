#include <stdio.h>
#define MAX 100

void m_matrix(double a[][2], double c[][MAX], int n){ //nは行列aの列数
  int i,j;
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      c[i][j] = a[i][0] * a[j][0] + a[i][1] * a[j][1];
    }
  }
}

int get_matrix(char *fileName, double a[][2]){
  FILE *fp;
  double x,y;
  int i = 0;
  if((fp = fopen(fileName, "r")) == NULL){
    printf("Failed to open the file¥n");
    return -1;
  }
  while(fscanf(fp,"%lg %lg", &x, &y) != EOF){
    a[i][0] = x;
    a[i][1] = y;
    i++;
  }
  fclose(fp);
  return i;
}

void print_matrix(double c[][MAX], int n){
  int i,j;
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      printf("%f ", c[i][j]);
    }
    printf("¥n");
  }
}

int main(){
  char *fileName = "input.dat";
  int n;
  double a[MAX][2], c[MAX][MAX];

  if((n = get_matrix(fileName, a)) == -1){
    return 0;
  }
  m_matrix(a, c, n);
  print_matrix(c, n);
  return 0;
}





      


  

  
