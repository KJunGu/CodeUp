// #include <stdio.h>
// int main(void)
// {
//     printf("Hello\nWorld");
//     return 0;
// }

// -------------------------------code 4-------------------

// #include <stdio.h>
// int main(void)
// {
//     printf("\'Hello\'");
//     return 0;
// }

// -------------------------------code 5--------------------
// #include <stdio.h>
// int main(void)
// {
//     printf("\"Hello World\"");
//     return 0;
// }
// -------------------------------code 6--------------------
// #include <stdio.h>
// int main(void)
// {
//     printf("\"!@#$%%^&*()\"");
//     return 0;
// }
// -------------------------------code 7--------------------
// #include <stdio.h>
// int main(void)
// {
//     printf("\"C:\\Download\\hello.cpp\""); // \를 입력할때는 \를 하나 더 써야한다
//     return 0;
// }  
// -------------------------------code 8--------------------
// #include <stdio.h>
// int main(void)
// {
//     printf("\u250c\u252c\u2510\n\u251c\u253c\u2524\n\u2514\u2534\u2518");
//     return 0;
// }
// -------------------------------code 9--------------------
// -------------------------------code 10--------------------
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     printf("%d", n);
//     return 0;
// }
// -------------------------------code 11--------------------
// #include <stdio.h>
// int main(void)
// {
//     char x;
//     scanf("%c", &x);
//     printf("%c",x);
//     return 0;
// }
// -------------------------------code 12--------------------
// #include <stdio.h>
// int main(void)
// {
//     float x;
//     scanf("%f", &x);
//     printf("%f",x);
//     return 0;
// }
// -------------------------------code 13--------------------
// #include <stdio.h>
// int main(void)
// {
//     int x,y;
//     scanf("%d%d" ,&x,&y);
//     printf("%d %d",x,y);
//     return 0;
// }
// -------------------------------code 14--------------------
// #include <stdio.h>
// int main(void)
// {
//     char x,y;
//     scanf("%c %c",&x,&y);
//     printf("%c %c",y,x);
//     return 0;
// }
// -------------------------------code 15--------------------
// #include <stdio.h>
// int main()
// {
//     float x;
//     scanf("%f",&x);
//     printf("%.2f",x);
//     return 0;
// }
// -------------------------------code 17--------------------
// #include <stdio.h>
// int main()
// {
//     int a;
//     scanf("%d",&a);
//     printf("%d %d %d",a,a,a);
//     return 00;
// }
// -------------------------------code 18--------------------
// #include <stdio.h>
// int main(void)
// {
//     int x,y;
//     scanf("%d:%d",&x,&y);
//     printf("%d:%d",x,y);
//     return 0;
// }
// -------------------------------code 19--------------------
// #include <stdio.h>
// int main()
// {
//     int a,b,c;
//     scanf("%d.%d.%d",&a,&b,&c);
//     printf("%04d.%02d.%02d",a,b,c);
//     return 0;
// }
// -------------------------------code 20--------------------
// #include <stdio.h>
// int main(void)
// {
//     int x,y;
//     scanf("%d-%d",&x,&y);
//     printf("%06d%07d",x,y);
//     return 0;
// }
// -------------------------------code 21--------------------
// #include <stdio.h>
// int main(void)
// {
//     char data[51]="";
//     scanf("%s",data);
//     printf("%s",data);
//     return 0;
// }
// -------------------------------code 22--------------------
// #include <stdio.h>
// int main(void)
// {
//     char data[2001];
//     fgets(data,2000,stdin);
//     printf("%s",data);
//     return 0;
// }
// -------------------------------code 23--------------------
// #include <stdio.h>
// int main(void)
// {
//     int a,b;
//     scanf("%d.%d",&a,&b);
//     printf("%d\n%d",a,b);
//     return 0;
// }
//  -------------------------------code 24--------------------
// #include <stdio.h>
// int main()
// {
//     char x[30];
//     scanf("%s",x);      //%c형식은 하나의 문자에 대응하고 %s 형식은 문자열에 대응 %c는 한바이트에 공간부여 %s는 \n값이 나올때까지 공간부여
//     int i;
//     for(i=0; x[i]!='\0'; i++)
//     {
//         printf("\'%c\'\n",x[i]); 
//     }

// }
//  -------------------------------code 25--------------------
// #include <stdio.h>
// int main()
// {
//     int a,b;
//     scanf("%d",&a);
//     printf("[%d]\n",a/10000*10000);
//     printf("[%d]\n",(a/1000%10)*1000);
//     printf("[%d]\n",(a/100%10)*100);
//     printf("[%d]\n",(a/10%10)*10);
//     printf("[%d]\n",a%10);
// }
//  -------------------------------code 25(1)------------------
// #include <stdio.h>
// int main()
// {
//     int a, b,c,d,e;
//     scanf("%01d%01d%01d%01d%01d", &a, &b, &c, &d, &e);
//     printf("[%d]\n", a*10000);
//     printf("[%d]\n", b*1000);
//     printf("[%d]\n", c*100);
//     printf("[%d]\n", d*10);
//     printf("[%d]\n", e);
// }
//  -------------------------------code 26--------------------
// #include <stdio.h>
// int main()
// {
//     int h,m,s;
//     scanf("%d:%d:%d", &h, &m, &s);
//     printf("%d", m);
// }
//  -------------------------------code 27--------------------
// #include <stdio.h>
// int main(){
//  int y,m,d;
//  scanf("%4d.%2d.%2d", &y, &m, &d);
//  printf("%02d-%02d-%04d", d,m,y);
// }
//  -------------------------------code 28--------------------
// #include <stdio.h>
// int main(){
//     unsigned int a;
//     scanf("%u", &a);
//     printf("%u", a);
// }
//  -------------------------------code 29--------------------
// #include <stdio.h>
// int main(){
//     double a;
//     scanf("%lf", &a);
//     printf("%.11lf", a);
// }
//  -------------------------------code 30--------------------
// #include <stdio.h>
// int main(){
//     long long int n;
//     scanf("%lld", &n);
//     printf("%lld", n);
//     }
//  -------------------------------code 31--------------------
// #include <stdio.h>
// int main(){
//     int a;
//     scanf("%d", &a);
//     printf("%o", a);
// }
//  -------------------------------code 32--------------------
// #include <stdio.h>
// int main(){
//     int a;
//     scanf("%d", &a);
//     printf("%x", a);
// }
//  -------------------------------code 33--------------------
// #include <stdio.h>
// int main(){
//     int a;
//     scanf("%d", &a);
//     printf("%X", a);
// }
//  -------------------------------code 34--------------------
// #include <stdio.h>
// int main(){
//     int a;
//     scanf("%o", &a);
//     printf("%d", a);
// }
//  -------------------------------code 35--------------------
// #include <stdio.h>
// int main(){
//     int a;
//     scanf("%x", &a);
//     printf("%o", a);
// }
//  -------------------------------code 36--------------------
// #include <stdio.h>
// int main(){
//     char a;
//     scanf("%c", &a);
//     printf("%d", a);
// }
//  -------------------------------code 37--------------------
// #include <stdio.h>
// int main(){
//     int a;
//     scanf("%d", &a);
//     printf("%c", a);
// }
//  -------------------------------code 38--------------------
// #include <stdio.h>
// int main(){
//     long int a,b;
//     scanf("%ld %ld", &a, &b);
//     a=a+b;
//     printf("%ld",a);
// }
//  -------------------------------code 39--------------------
// #include <stdio.h>
// int main(){
//     long int a,b;
//     scanf("%ld %ld", &a, &b);
//     a=a+b;
//     printf("%ld", a);
// }
//  -------------------------------code 40--------------------
// #include <stdio.h>
// int main(){
//     int a;
//     scanf("%d", &a);
//     printf("%d", -a);
// }
//  -------------------------------code 41--------------------
// #include <stdio.h>
// int main(){
//     char a;
//     scanf("%c", &a);
//     a=a+1;
//     printf("%c", a);
// }
//  -------------------------------code 42--------------------
// #include <stdio.h>
// int main(void){
//     int a,b;
//     scanf("%d %d", &a, &b);
//     a= a/b;
//     printf("%d", a);
// }
//  -------------------------------code 43--------------------
// #include <stdio.h>
// int main(){
//     int a,b;
//     scanf("%d %d", &a, &b);
//     a=a%b;
//     printf("%d", a);
// }
//  -------------------------------code 44--------------------
// #include <stdio.h>
// int main(){
//     long int a;
//     scanf("%ld", &a);
//     a++;
//     printf("%ld",a);
// }
//  -------------------------------code 45--------------------
// #include <stdio.h>
// int main(){
//     int a,b,c,d,e,f,g;
//     scanf("%d %d", &a, &b);
//     c =a+b;
//     d =a-b;
//     e =a*b;
//     f =a/b;
//     g =a%b;
//     printf("%d\n",c);
//     printf("%d\n", d);
//     printf("%d\n", e);
//     printf("%d\n", f);
//     printf("%d\n", g);
//     printf("%.02f", (float)a/(float)b);
// }
//  -------------------------------code 46--------------------
// #include <stdio.h>
// int main(void){
//     int a,b,c;
//     scanf("%d %d %d", &a, &b, &c);
//     printf("%d\n", a+b+c);
//     printf("%.1f", (float)(a+b+c)/3);
// }
//  -------------------------------code 47--------------------
// #include <stdio.h>
// int main(){
//     int a;
//     scanf("%d", &a);
//     printf("%d", a<<1);
// }
//  -------------------------------code 48--------------------
// #include <stdio.h>
// int main(){
//     int a,b;
//     scanf("%d %d", &a, &b);
//     printf("%d", a<<b);
// }
//  -------------------------------code 49--------------------
// #include <stdio.h>
// int main(){
//     int a,b;
//     scanf("%d %d", &a, &b);
//     printf("%d", a>b);
// }
//  -------------------------------code 50--------------------
// #include <stdio.h>
// int main(){
//     int a,b;
//     scanf("%d %d", &a, &b);
//     printf("%d", a==b);
// }
//  -------------------------------code 51--------------------
// #include <stdio.h>
// int main(){
//     int a,b;
//     scanf("%d %d", &a, &b);
//     printf("%d", b>=a);
// }
//  -------------------------------code 52--------------------
// #include <stdio.h>
// int main(){
//     int a,b;
//     scanf("%d %d", &a, &b);
//     printf("%d", a!=b);
// }
//  -------------------------------code 53--------------------
// #include <stdio.h>
// int main(){
//     int a;
//     scanf("%d", &a);
//     printf("%d", a!=1);
// }
//  -------------------------------code 54--------------------
// #include <stdio.h>  
// int main(){
//     int a,b;
//     scanf("%d %d", &a, &b);
//     printf("%d", a==1 && b==1);
// }
//  -------------------------------code 55--------------------
// #include <stdio.h>  
// int main(){
//     int a,b;
//     scanf("%d %d", &a, &b);
//     printf("%d", a==1 || b==1);
// }
//  -------------------------------code 56--------------------
// #include <stdio.h>  
// int main(){
//     int a,b;
//     scanf("%d %d",&a ,&b);
//     printf("%d", (a&&!b)||(!a&&b));
// }
//  -------------------------------code 57--------------------
// #include <stdio.h>
// int main(){
//        int a,b;
//         scanf("%d %d",&a ,&b);
//         printf("%d", (!a&&!b) || (a&&b));
// }
//  -------------------------------code 58--------------------
// #include <stdio.h>
// int main(){
//        int a,b;
//         scanf("%d %d",&a ,&b);
//         printf("%d", (!a&&!b));
// }
//  -------------------------------code 59--------------------
// #include <stdio.h>
// int main(){
//        int a;
//         scanf("%d",&a);
//         printf("%d", ~a);
// }
//  -------------------------------code 60--------------------
// #include <stdio.h>
// int main(){
//        int a,b;
//         scanf("%d %d",&a, &b);
//         printf("%d", a & b);
// }
//  -------------------------------code 61--------------------
// #include <stdio.h>
// int main(){
//     int a,b;
//     scanf("%d %d", &a, &b);
//     printf("%d", a | b);
// }
//  -------------------------------code 62--------------------
// #include <stdio.h>
// int main(){
//     int a,b;
//     scanf("%d %d", &a, &b);
//     printf("%d", a ^ b);
// }
//  -------------------------------code 63--------------------
// #include <stdio.h>
// int main(){
//     int a,b;
//     scanf("%d %d", &a, &b);
//     printf("%d", a>b ? a:b);
// }
//  -------------------------------code 64--------------------
// #include <stdio.h>
// int main(){
//     int a,b,c;
//     scanf("%d %d %d", &a, &b, &c);
//     printf("%d", (a>b?b:a)>c?c:(a>b?b:a));
// }
//  -------------------------------code 65--------------------
// #include <stdio.h>
// int main(){
//     int a,b,c;
//     scanf("%d %d %d", &a, &b, &c);
//     if (a % 2 == 0){
//         printf("%d\n", a);
//     }
//     if (b % 2 == 0){
//         printf("%d\n", b);
//     }
//     if (c % 2 == 0){
//         printf("%d\n", c);
//     }
// }
//  -------------------------------code 66--------------------
// #include <stdio.h>  
// int main(){
//     int a,b,c;
//     scanf("%d %d %d", &a, &b, &c);
//     if (a % 2 == 0){
//         printf("even\n");
//     }
//     else{
//         printf("odd\n");
//     }
//     if (b % 2 == 0){
//         printf("even\n");
//     }
//     else{
//         printf("odd\n");
//     }
//     if (c % 2 == 0){
//         printf("even\n");
//     }
//     else{
//         printf("odd\n");
//     }
// }
//  -------------------------------code 67--------------------
// #include <stdio.h>
// int main(){
//     int a;
//     scanf("%d", &a);
//     if ( a > 0 ){
//         if (a % 2 == 0){
//             printf("plus\n");
//             printf("even");
//         }
//         else {
//             printf("plus\n");
//             printf("odd");
//         }
//     }
//     if ( a < 0 ){
//         if (a % 2 == 0){
//             printf("minus\n");
//             printf("even");
//         }
//         else {
//             printf("minus\n");
//             printf("odd");
//         }
//     }
// }
//  -------------------------------code 68--------------------
// #include  <stdio.h>
// int main(void){
//     int a;
//     scanf("%d" ,&a);
//     if ( 90 <= a && a <= 100){
//         printf("A");
//     }
//     else if (70 <= a && a <= 89){
//         printf("B");
//     }
//     else if (40 <= a && a<= 69){
//         printf("C");
//     }
//     else {
//         printf("D");
//     }

// }
//  -------------------------------code 69--------------------
// #include <stdio.h>
// int main(){
//     char a;
//     scanf("%c", &a);
//     switch (a)
//     {
//     case 'A':
//         printf("best!!!");
//         break;
//     case 'B':
//         printf("good!!");
//         break;
//     case 'C':
//         printf("run!");
//         break;
//     case 'D':
//         printf("slowly~");
//         break;
//     default:
//         printf("what?");
//         break;
//     }
// }
//  -------------------------------code 70--------------------
// #include <stdio.h>
// int main(){
//     int a;
//     scanf("%d", &a);
//     switch (a)
//     {
//     case 12:
//     case 1:
//     case 2:
//         printf("winter"); 
//         break;
//     case 3: 
//     case 4:
//     case 5:
//         printf("spring");
//         break;
//     case 6:
//     case 7:
//     case 8:
//         printf("summer");
//         break;
//     case 9:
//     case 10:
//     case 11:
//         printf("fall");
//         break;
//     }
// }
//  -------------------------------code 71--------------------
// #include <stdio.h>
// int main(){
//     int a;
//     reload:
//     scanf("%d", &a);
//     if ( a == 0){
//         return 0;
//     }
//     printf("%d\n", a); 
//     if ( a != 0 ) goto reload;
// }
//  -------------------------------code 72--------------------
// #include <stdio.h>
// int main(){
//     int a,b;
//     scanf("%d", &a);
//     reload:
//     scanf("%d", &b);
//       if ( a == 0 )  {
//         return 0;
//     }
//     printf("%d\n",b);
//     if( a-- != 0 ) goto reload;
// }
//  -------------------------------code 73--------------------
// <<<<<<< HEAD
// #include <stdio.h>
// int main(){
//     int a=1;
//     while ( a != 0)
//     {
//         scanf("%d", &a);
//          if (a == 0){
//             return 0;
//         }
//         printf("%d\n", a);
//     }
    
// }
//  -------------------------------code 74--------------------
// #include <stdio.h>
// int main(){
//     int a;
//     scanf("%d" ,&a);
//     while (a != 0)
//     {
//         printf("%d\n",a);
//         a --;
//     }
// }
//  -------------------------------code 75--------------------
// #include <stdio.h>
// int main(){
//     int a;
//     scanf("%d", &a);
//     while (a != 0)
//     {
//         printf("%d\n",a-1);
//         a --;
//     }
// }
//  -------------------------------code 76--------------------
// #include <stdio.h>
// int main(){
//     char a,b='a';
//     scanf("%c", &a);
//     while (b != a+1)
//     {
//         printf("%c ", b);
//         b++;
//     }
// }
//  -------------------------------code 77--------------------
// #include <stdio.h>
// int main(){
//     int i,b;
//     scanf("%d", &b);
//     for ( i = 0; i <= b; i++)
//     {
//         printf("%d\n", i);
//     }
    
// }
//  -------------------------------code 78--------------------
// #include <stdio.h>
// int main(){
//     int i,a,sum=0;
//     scanf("%d", &a);
//     for ( i = 1; i <= a; i++)
//     {
//         if (i % 2 == 0) sum += i;
//     }
//      printf("%d", sum);
// }

// #include <stdio.h>
// int main(){
//     int a,sum=0;
//     scanf("%d", &a);
//     while (a!=0)
//     {
//        if (a % 2 == 0){
//         sum += a;
//        }
//        a --; 
       
//     }
//      printf("%d", sum);
// }
//  -------------------------------code 79--------------------
// #include <stdio.h>
// int main(){
//     char a;
//     while (a != 'q')
//     {
//         scanf("%c", &a);
//         printf("%c", a);
//     }
    
// }
//  -------------------------------code 80--------------------
// #include <stdio.h>
// int main(){
//     int i,a,sum=0;
//     scanf("%d",&a);
//     for (i = 0; i <= a; i++)
//     {
//          sum += i;
//         if (sum >= a) {
//             printf("%d", i);
//            break;
//         }
//     }  
// }
//  -------------------------------code 81--------------------
// #include <stdio.h>
// int main(){
// int a,b,i,j;
// scanf("%d %d" ,&a ,&b);
// for (i = 1; i <= a; i++)
// {
//     for  (j = 1; j <= b; j++)
//     {
//         printf("%d %d\n", i,j);
//     } 
// }
// }
//  -------------------------------code 82--------------------
// #include <stdio.h>
// int main(){
//     int i,a;
//     scanf("%X", &a);
//     for (i = 1; i < 16; i++)
//     {
//         printf("%X*%X=%X\n", a,i,a*i);
//     }
// }
//  -------------------------------code 83--------------------
// #include <stdio.h>
// int main(){
//     int a,i;
//     scanf("%d", &a);
//     for ( i = 1; i <= a; i++)
//     {
//         if( i%10 == 3 || i%10 == 6 || i%10 == 9 )
//         {
//             printf("X ");
//         }else {
//             printf("%d ", i);
//         }
//     }
    
// }
//  -------------------------------code 84--------------------
// #include <stdio.h>
// int main(){
//     int a,b,c,i,j,k;
//     int d=0;
//     scanf("%d %d %d" ,&a ,&b ,&c);
//     for ( i = 0; i < a; i++)
//     {
//         for (j = 0; j < b; j++)
//         {
//             for (k = 0; k < c; k++)
//             {
//                 printf("%d %d %d\n",i,j,k);
//                 d++;
//             }
            
//         }
        
//     }
//     printf("%d", d);
// }
//  -------------------------------code 85--------------------
// #include <stdio.h>
// int main(){
//     long int  a,b,c,d; 
//     scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
//     printf("%.1lf MB", (double)a*b*c*d/8388608);
// }
//  -------------------------------code 86--------------------
// =======
// >>>>>>> 584779e7b0e9872969038948e4697b6fba1c95e4
// #include <stdio.h>
// int main (){
//     int a,b,c;
//     scanf("%d %d %d", &a, &b, &c);
//     printf("%.2lf MB", (double)a*b*c/8388608);
// }
//  -------------------------------code 87--------------------
// #include <stdio.h>
// int main(void){
//     int a,b,x=0;
//     scanf("%d", &a);
//    for ( b = 1;  ;b++)
//    {
//      x += b;
//      if(x>=a){
//             printf("%d", x);
//         break;
//      }
//    }
// }
//  -------------------------------code 88--------------------
// #include <stdio.h>
// int main(void){
//     int a,i;
//     scanf("%d", &a);
//     for ( i = 1; i <= a; i++)
//     { 
//         if ( i % 3 == 0){
//          continue;
//          printf("%d ", i);
//         }
//         printf("%d ", i);
//     }    
// }
//  -------------------------------code 89--------------------
// #include <stdio.h>
// int main(void){
//     int a,b,c,i;
//     scanf("%d %d %d", &a, &b, &c);
//     for (i = 1; i < c; i++)
//     {
//         a += b;
//     }
//     printf("%d", a);
// }
//  -------------------------------code 90--------------------
// #include <stdio.h>
// int main(){
//     long long int a;
//     int b,c;
//     scanf("%lld %d %d", &a ,&b, &c);
//     for ( int i = 1; i < c; i++)
//     {
//         a *=b;
//     }
//     printf("%lld", a);
    
// }
//  -------------------------------code 91--------------------
// #include <stdio.h>
// int main(void){
//     long int a,b,c;
//     long int d;
//     scanf("%ld %ld %ld %ld", &a, &b, &c, &d);
//     for (int i = 1; i < d; i++)
//     {
//         a =  a*b+c;
//     }
//     printf("%ld", a);
// }
//  -------------------------------code 92--------------------
// #include <stdio.h>
// int main(){
//     int a,b,c,day=1;
//     scanf("%d %d %d", &a, &b, &c);
//     while (day % a != 0 || day % b!=0 || day % c != 0)
//    {
//     day ++;
//    }
//     printf("%d", day);
// }
//  -------------------------------code 93--------------------
// #include <stdio.h>
// int main(){
//     int b,i,n;
//     int a[24]= {};
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         scanf("%d", &b);
//         a[b]+=1;
//     }
//     for ( i = 1; i <= 23; i++)
//     {
//         printf("%d ", a[i]);
//     }
// }
//  -------------------------------code 94--------------------
// #include <stdio.h>
// int main(){
//     int b,i,n;
//     int a[10000]={};
//     scanf("%d", &n);
//     for ( i = 1; i <= n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for ( i = n ; i >= 1; i--)
//     {
//         printf("%d ", a[i]);
//     }
// }
//  -------------------------------code 95--------------------
// #include <stdio.h>
// int main(){
//     int a,b,min,i;
//     int c[10000]={};
//     scanf("%d", &a);
//     for (i = 0; i < a; i++)
//     {
//         scanf("%d", &c[i]);
//     }
//     min = c[0];
//     for (i = 0; i < a; i++)
//     {
//         if (min > c[i]) min = c[i];
//     }
//     printf("%d", min);
// }
//  -------------------------------code 96--------------------
// #include <stdio.h>
// int main(){
//     int x,y,n,i,j;
//     int arr[20][20]={};
//     scanf("%d", &n);
//     for (i=1; i <= n; i++)
//     {
//         scanf("%d %d", &x, &y);
//         arr[x][y]=1;
//     }
//     for(i=1; i<=19; i++)
//     {
//         for(j=1; j<=19; j++){
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
    
// }
//  -------------------------------code 97--------------------
// #include <stdio.h> 
// int main(){
//     int x,y,i,j,n;
//     int arr[20][20]={};
//     for ( i = 1; i <= 19; i++)
//     for ( j = 1; j <= 19; j++)
//         scanf("%d", &arr[i][j]);

//     scanf("%d", &n);
//     for ( i=1; i<=n; i++)
//     {
//       scanf("%d %d", &x, &y);  
//       for ( j = 1; j <= 19; j++)
//       {
//         if (arr[x][j]==0 ) arr[x][j]=1;
//         else arr[x][j]=0;
//       }
//       for ( j = 1; j <= 19; j++)
//       {
//         if (arr[j][y]==0) arr[j][y]=1;
//         else arr[j][y]=0;
//       }
//     }
//     for ( i = 1; i <= 19; i++)
//     {
//         for ( j = 1; j <= 19; j++)
//         {
//             printf("%d " , arr[i][j]);
//         }
//         printf("\n");
//     }
// }
//  -------------------------------code 98--------------------
// #include <stdio.h> 
// int main(){
//     int w,h,n,i,j;
//     int l,d,x,y;
//     int arr[100][100]={};
//     scanf("%d %d", &w, &h);
//     scanf("%d", &n);
//     for (  i = 1; i <= n; i++)
//     {
//         scanf("%d %d %d %d", &l, &d, &x, &y);
//         if(d==0){
//             for ( j = 0; j < l; j++)
//             {
//                 arr[x][y+j]=1;
//             } 
//         }
//         if(d==1){
//             for ( j = 0; j < l; j++)
//             {
//                 arr[x+j][y]=1;
//             }
            
//         }
//     }
//     for ( i = 1; i <= w; i++)
//     {
//         for ( j = 1; j <= h; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
// }
//  -------------------------------code 99--------------------
// #include <stdio.h>
// int main(){
//     int i,j;
//     int x=2, y=2;
//     int arr[11][11]={};
//     for ( i = 1; i <= 10; i++)
//     { 
//         for ( j = 1; j <= 10; j++){
//         scanf("%d", &arr[i][j]);
//         }
//     }
//     while(1){
//         if(arr[x][y] == 0){
//             arr[x][y] = 9;
//             y++;
//         }
//         if (arr[x][y] == 1){
//             y--;
//             x++;
//         }
//         if (arr[x][y] == 2) {
//             arr[x][y] = 9;
//             break;
//         }
//         else if (arr[x][y+1] == 1 && arr[x+1][y] == 1){
//             if (arr[x][y]==0)
//             {
//                 arr[x][y] = 9;
//             }
//             break;
//         }
//     }
//     for ( i = 1; i <= 10; i++)
//     {
//         for ( j = 1; j <= 10; j++)
//         {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
// }