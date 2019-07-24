#include <stdio.h>
#include <math.h>/*math.hのヘッダファイルを使う*/
double sin2(double x) {/*関数sin2()の本体*/
 double wk;/*関数sin2()の中だけで一時的に使用する関数*/
 wk = sin(x)*sin(x);/*sin(x)の２乗を求める関数を作成*/
 return wk;/*wkの値を戻り値にする*/
}
int main(void) {
 double a, b, ans1, x, yy, f, fa, fb, ans2, ky, gy, h;
 int i, m = 100;
 yy = 0;/*初期値を入力*/
 printf("0以上の値a,bを入力してください(a<b)\na=");/*値の入力を促す*/
 scanf("%lf", &a);
 printf("b=");
 scanf("%lf", &b);/*a,bに値を入力*/
 h = (b - a) / m;
 fa = sin2(a);/*aの時の値を計算*/
 fb = sin2(b);/*bの時の値を計算*/
 getchar();
 x = a + h;/*xにaを代入*/

     /*台形の公式を用いる*/
 for (i = 0;i <= 99;i++) {
  if (x > b)break;/*aからbの範囲で繰り返す*/
  f = sin2(x);
  yy = f + yy;/*計算結果を足していく*/
  x = x + h;
 }
 ans1 = h*(0.5*fa + 0.5*fb + yy);/*答えの式*/
 printf("y=sin^2xの積分の答えは台形の公式：%.2f\n", ans1);/*結果を表示*/
            /*台形の公式プログラム終了*/

            /*シンプソンの公式を用いる*/
 gy = 0;/*初期値を入力*/
 ky = 0;
 x = a + h;/*初期値にする*/
 for (i = 0;i <= 99;i++) {/*偶数番目の値の和*/
  if (x > b)break;/*aからbの範囲で繰り返す*/
  f = sin2(x);
  gy = f + gy;/*計算結果を足していく*/
  x = x + 2*h;
 }
 x = a + 2*h;/*初期値にする*/
 for (i = 0;i <= 99;i++) {/*奇数番目の値の和*/
  if (x > b)break;/*aからbの範囲で繰り返す*/
  f = sin2(x);
  ky = f + ky;/*計算結果を足していく*/
  x = x + 2*h;
 }
 ans2 = h / 3 * ((fa + fb) + 4 * (ky)+2 * (gy));
 printf("シンプソンの公式：%.2f\n", ans2);
 getchar();
 getchar();
 /*シンプソンの公式のプログラム終了*/
 return 0;
}
