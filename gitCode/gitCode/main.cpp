//
////#include <opencv2/opencv.hpp>
//#include<opencv2/core/core.hpp>  
//#include<opencv2/highgui/highgui.hpp>
//
//#include <iostream>
//#include<stdlib.h>
//
//
//using namespace std;
//
//using namespace cv;
//
//int main()
//
//{
//
//	//读取本地的一张图片便显示出来
//
//	Mat img = imread("Tps.png");
//
//	imshow("MM Viewer", img);
//	int a = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		a = 1 << 16 |2 << 8 | i;
//		cout << "a=:" << a << endl;
//	}
//
//
//	//等待用户按键
//	system("pause");
//
//	waitKey(0);
//
//
//	return 0;
//
//}

//-----------------------------------------------------------------------------------------------


#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include "gray.h"
#include "stdlib.h"
using namespace cv;


int main()
{

	Mat girl = imread("Tps.png");  //download img to Mat
	gray(girl);//
	namedWindow("结果图");	//create a window
	imshow("结果图", girl);	//show the window

	waitKey();  //wait
	system("pause");  //pause the window
	return 0;
}