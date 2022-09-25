#define  _CRT_SECURE_NO_WARNINGS 1
#include<math.h>
#include<stdio.h>

int main()
{
	double a, b, c, d;
	double s, n,m;
	scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
	s = (a - c) * (a - c);
	n = (b - d) * (b - d);
	m = s + n;
	m = sqrt(m);
	printf("%.2f", m);
	return 0;
}

//int main()
//{
//	int a, b, c;
//	double p,s;
//	scanf("%d%d%d", &a, &b, &c);
//	p = (a + b + c) / 2.0;
//	s = p * (p - a) * (p - b) * (p - c);
//	s = sqrt(s);
//	printf("%.2f", s);
//	return 0;
//}
//int main()
//{
//	long long a;
//	scanf("%lld", &a);
//	a = (a / 10) % 10;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	int d = (a * 24 * 60 + b * 60 + c) * 10;
//	printf("%d\n", d);
//	return 0;
//}

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	
//	printf("%o", a);
//
//	return 0;
//}
//int main()
//{
//	int a,b,c,d;
//	scanf("%d%d", &a,&b);
//	c = a % 100;
//	d = b % 100;
//	int sum = c + d;
//	sum = sum % 100;
//	printf("%d", sum);
//	
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	int d = a / c;
//	int f = a % c;
//	if (f == 0)
//		d = d;
//	else
//		d = d + 1;
//	int g = b / c;
//	int h = b % c;
//	if(h==0)
//		g = g;
//	else
//		g = g + 1;
//	int j = g * d;
//	printf("%d", j);
//	return 0;
//}
//int main()
//{
//	int a,c;
//	scanf("%d", &a);
//	int b = a / 4;
//	int m = a % 4;
//	if (m == 0)
//		c = b * b;
//	else if (m==2)
//		c = b * (b + 1);
//	printf("%d", c);
//	return 0;
//}

//int main()
//{
//	char ch;
//	int a;
//	scanf("%c%d", &ch, &a);
//	printf("(%c,%d)",ch,a);
//	return 0;
//}

//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	int a = ch;
//	printf("%d", a);
//
//	return 0;
//}

//int main()
//{
//	char ch;
//	int a;
//	scanf("%c%d", &ch, &a);
//	int d = 'H' - ch;
//	int c = 8 - a;
//	int sum = d + c;
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int r;
//	double s1, s2;
//	scanf("%d", &r);
//	
//	s1 = 2.0 * r * r;
//	s2 = 4.0 * r * r;
//	double m, n;
//	m = 100.0 * s1 / (3.14 * r * r);
//	n = (100 * 3.14 * r * r) / s2;
//	printf("%d %.2lf%\n",(int)s1, m);
//	printf("%d %.2lf%\n",(int)s2, n);
//	return 0;
//}

//int main()
//{
//	double a,b;
//	scanf("%lf%lf", &a, &b);
//	int c = a / b;
//	double d = a -c*b;
//	printf("%d %.1lf", c, d);
//	return 0;
//}

//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	int sum = (a + b) / 3 + c;
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	int m1, m2, s1, s2;
//	scanf("%d%d", &m1, &s1);
//	scanf("%d%d", &m2, &s2);
//	int a = m2 - m1;
//	int b = s2 - s1;
//	if (b < 0)
//	{
//		b = b + 60;
//		a = a - 1;
//	}
//	printf("%02d:%02d", a, b);
//	return 0;
//}
//int main()
//{
//	int n, i;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum + i;
//
//
//	}
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	char m,n;
//	m = getchar();
//	getchar();
//	n = getchar();
//	if (m <= 90)
//		m = m + 32;
//	else
//		m = m - 32;
//	if (n <= 90)
//		n = n + 32;
//	else
//		n = n - 32;
//	printf("%c %c", m, n);
//	return 0;
//}


//int main()
//{
//	int a;
//	double b = sqrt(3),c;
//	scanf("%d", &a);
//	c = (3.0 * b) * a * a / 2.0;
//	printf("%.2f", c);
//
//	return 0;
//}


//int main()
//{
//	int a,b;
//	scanf("%d", &a);
//	b = a % 1000000;
//	printf("%d", b);
//	return 0;
//}

//
//int main()
//{
//	int h1, h2, m1, m2, s1, s2;
//	scanf("%d%d%d", &h1, &m1, &s1);
//	scanf("%d%d%d", &h2, &m2, &s2);
//	int d = 60 * 60 * (h2 - h1) + 60 * (m2 - m1) + (s2 - s1);
//	printf("%d", d);
//
//	return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//	int a, b, c;
//	double A, B, C;
//	scanf("%d%d%d",&a,&b,&c);
//	A = (b * b + c * c - a * a) / 2.0 * b * c;
//	B = (a * a + c * c - b * b) / 2.0 * a * c;
//	C = (b * b + a * a - c * c) / 2.0 * b * a;
//	printf("%f %f %f", A, B, C);
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int a, b, c;
//	double m, n, p;
//	scanf("%d%d%d", &a, &b, &c);
//	m = (b * b + c * c - a * a) / 2.0 * b * c;
//	n = (a * a + c * c - b * b) / 2.0 * a * c;
//	p = (b * b + a * a - c * c) / 2.0 * b * a;
//	printf("%.6lf %.6lf %.6lf", m, n, p);
//	return 0;
//}
//#include<stdio.h>
//
//int main()
//{
//	int a, b, c;
//	double A, B, C;
//	scanf("%d%d%d",&a,&b,&c);
//	A = (b * b + c * c - a * a) / 2.0 * b * c;
//	B = (a * a + c * c - b * b) / 2.0 * a * c;
//	C = (b * b + a * a - c * c) / 2.0 * b * a;
//	printf("%f %f %f", A, B, C);
//	return 0;
//}
//{
//	int a;
//	float b;
//	scanf("%d", &a);
//	b = 0.7 * a;
//	b = b / 1;
//	printf("%d", (int)b);
//	return 0;
//}

//int main()
//{
//	int a, b, c, d;
//	scanf("%d%d", &a, &b);
//	c = (b - a * 2) / 2;
//	d = a - c;
//	printf("%d %d", d, c);
//	return 0;
//}

//int main()
//{
//	int a, b;
//	scanf("%d", &a);
//	b = a * (a - 1) * (a - 1) * (a - 1);
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int c = a - b;
//	int d = (c % 100) / 10;
//	printf("%d\n", d);
//	return 0;
//}
//int main()
//{
//	int n;
//	float p1, p2, p3, q1, q2, q3;
//	scanf("%d", &n);
//	
//	scanf("%f%f%f", &p1, &p2, &p3);
//	
//
//	scanf("%f%f%f", &q1, &q2, &q3);
//	double m = (q1 * p3 + q2 * p1 + q3 * p2)*n;
//	
//	printf("%.4f", m);
//	return 0;
//}


//
//int main()
//{
//	int a,b,c,d,f;
//	scanf("%d", &a);
//	b = a / 1000;
//    c = (a / 100) % 10;
//	d = (a / 10) % 10;
//	f = a % 10;
//	int g = 1000 * f + 100 * d + 10 * c + b;
//	printf("%d", g);
//	return 0;
//}

//int main()
//{
//	long long  a, t, b;
//	scanf("%lld%lld%lld", &a, &t, &b);
//	int m = t / (a - 1);
//	int c = m * (b - 1);
//	printf("%d", c);
//	return 0;
//}