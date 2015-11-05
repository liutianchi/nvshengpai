#include<iostream>
#include<opencv2\opencv.hpp>
using namespace std;
using namespace cv;
int main()
{
	Mat img=imread("D:\\lena.bmp");
	imshow("img",img);
	waitKey(0);
	return 0;
}