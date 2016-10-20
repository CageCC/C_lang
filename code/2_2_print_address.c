#include <stdio.h>
#include <stdlib.h>
/**
 * 打印变量的地址
 *
 */
 int g_variable;
 static int file_g_variable;

 void func1(void) {
 	int func1_variable;

 	static int func1_static_variable;


 	printf("&func1_variable ... %p\n", &func1_variable);
 	printf("&func1_static_variable ... %p\n", &func1_static_variable);


 }


 void func2(void) {
 	int func2_variable;


 	printf("&func2_variable .. %p\n", &func2_variable);
 }


 int main(int argc, char const *argv[])
 {
 	int *p;

 	// 指向函数的指针
 	printf("&func1 ... %p\n", func1);
 	printf("&func2 ... %p\n", func2);

 	// 字符串常量
 	printf("string literal ... %p\n", "abc");

 	// 全局变量
 	printf("&g_varialbe ... %p\n", &g_variable);

 	// 文件内static变量
 	printf("&file_g_variable ... %p\n", &file_g_variable);


 	// 局部变量
 	func1();
 	func2();

 	// malloc 分配的变量
 	p = malloc(sizeof(int));
 	printf("malloc address ... %p\n", p);

 	return 0;
 }