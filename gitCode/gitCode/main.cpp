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


//-----------------------------------【程序说明】----------------------------------------------
//  程序名称:：【OpenCV入门教程之三】图像的载入，显示与输出 一站式完全解析 博文配套源码
// VS2010版   OpenCV版本：2.4.8
//      2014年3月5日 Create by 浅墨
//  描述： 图像的载入，显示与输出 一站式剖析   配套源码
//  图片素材出处：dota2原画圣堂刺客 dota2 logo  动漫人物
//------------------------------------------------------------------------------------------------


#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include "gray.h"
#include "stdlib.h"
using namespace cv;


int main()
{

	Mat girl = imread("Tps.png");  //载入图像到Mat
	gray(girl);//
	namedWindow("结果图");	//create a window
	imshow("结果图", girl);	//show the window

	waitKey();  //wait
	system("pause");  //pause the window
	return 0;
}