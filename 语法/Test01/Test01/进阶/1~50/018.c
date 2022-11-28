////KiKi访问网站，得到HTTP状态码，但他不知道什么含义，
////BoBo老师告诉他常见HTTP状态码：200（OK，请求已成功），202（Accepted，服务器已
////接受请求，但尚未处理。）400（Bad Request，请求参数有误），403（Forbidden，被禁
////止），404（Not Found，请求失败），500（Internal Server Error，服务器内部错误），5
////02（Bad Gateway，错误网关）。
//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main() {
//	int n = 0;
//	while (scanf("%d", &n) != EOF) {
//		switch (n) {
//		case 200:
//			printf("OK\n");
//			break;
//		case 202:
//			printf("Accepted\n");
//			break;
//		case 400:
//			printf("Bad Request\n");
//			break;
//		case 403:
//			printf("Forbidden\n");
//			break;
//		case 500:
//			printf("Internal Server Error\n");
//			break;
//		case 502:
//			printf("Bad Gateway\n");
//			break;
//		case 404:
//			printf("Not Found\n");
//			break;
//		}
//	}
//
//}