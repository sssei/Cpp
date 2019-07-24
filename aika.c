#include <stdio.h>
#define MAX 100

void m_matrix(const double a[][2], double c[][2], int n){ //nは行列aの列数
  int i;
  c[0][0] = 0;
  c[0][1] = 0;
  c[1][0] = 0;
  c[1][1] = 0;
  for(i = 0; i < n; i++){
    c[0][0] += a[i][0] * a[i][0];
    c[0][1] += a[i][1] * a[i][0];
    c[1][0] += a[i][1] * a[i][0];
    c[1][1] += a[i][1] * a[i][1];
  }
}

void multipy_xy(const double x[][2], const double y[][1], double c[2][1], int n){
  c[0][0] = 0;
  c[1][0] = 0;
  int i;
  for(i = 0; i < n; i++){
    c[0][0] += x[i][0] * y[i][0];
    c[1][0] += x[i][1] * y[i][0];
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

void get_inverse(const double a[][2], double c[][2]){
  int i, d;
  d = a[0][0] * a[1][1] - a[0][1] * a[1][0];
  c[0][0] = a[1][1] / d;
  c[0][1] = - a[0][1] / d;
  c[1][0] = - a[1][0] / d;
  c[1][1] = a[0][0] / d;
}

void get_xy(const double a[][2], double x[][2], double y[][1], int n){
  int i;
  for(i = 0; i < n; i++){
    x[i][0] = a[i][0];
    x[i][1] = 1;
    y[i][0] = a[i][1];
  }
  return;
}

void print_matrix(double c[][MAX], int n){
  int i,j;
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      printf("%f ", c[i][j]);
    }
    printf("\n");
  }
}

void get_ab(const c[][2], const xy[][1], ab[2]){
  ab[0] = c[0][0] * xy[0][0] + c[0][1] * xy[1][0];
  ab[1] = c[1][0] * xy[0][0] + c[1][1] * xy[1][0];
}

int main(){
  char *fileName = "input.dat";
  int n;
  double a[MAX][2], c[2][2], x[MAX][2], y[MAX][1], c2[2][2], xy[2][1];
  double ab[2];

  if((n = get_matrix(fileName, a)) == -1){
    return 0;
  }
  get_xy(a, x, y, n);
  m_matrix(x, c, n);
  get_inverse(c, c2);
  multipy_xy(x, y, xy, n);
  get_ab(c2, xy, ab);
  printf("%f %f\n", ab[0], ab[1]);
  return 0;
}





      


  

  
